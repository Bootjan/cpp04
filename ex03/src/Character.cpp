/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:08:44 by bschaafs          #+#    #+#             */
/*   Updated: 2024/01/15 22:16:08 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
	: _nMateria(4)
{
	std::memset(_equipped, 0, sizeof(int) * _nMateria);
	std::memset(_materias, 0, sizeof(AMateria *) * _nMateria);
}

Character::Character(const std::string& name)
	: _name(name)
	, _nMateria(4)
{
	std::memset(_equipped, 0, sizeof(int) * _nMateria);
	std::memset(_materias, 0, sizeof(AMateria *) * _nMateria);
}

Character::Character(const Character& original)
	: _name(original._name)
	, _nMateria(4)
{
	std::memcpy(_equipped, original._equipped, sizeof(int) * _nMateria);
	for (int idx = 0; idx < _nMateria; idx++)
		if (original._materias[idx])
			_materias[idx] = original._materias[idx]->clone();
}

Character::~Character(void)
{
	for (int idx = 0; idx < _nMateria; idx++)
		if (_materias[idx])
			delete _materias[idx];
}

Character&	Character::operator=(const Character& original)
{
	_name = original._name;
	std::memcpy(_equipped, original._equipped, sizeof(int) * _nMateria);
	for (int idx = 0; idx < _nMateria; idx++)
		if (original._materias[idx])
			_materias[idx] = original._materias[idx]->clone();
	return *this;
}

const std::string&	Character::getName(void) const
{
	return _name;
}

void	Character::equip(AMateria* m)
{
	int	idx = 0;
	for (idx = 0; idx < _nMateria && _equipped[idx] != 0; idx++)
		;
	if (idx == _nMateria)
		return ;
	_materias[idx] = m;
	_equipped[idx] = 1;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
		return ;
	if (_equipped[idx] == 1)
		_equipped[idx] = -1;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 4 || _equipped[idx] != 1)
		return ;
	_materias[idx]->use(target);
}
