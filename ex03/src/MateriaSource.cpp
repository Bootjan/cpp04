/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:51:18 by bschaafs          #+#    #+#             */
/*   Updated: 2024/01/15 22:15:50 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
	: _nMateria(4)
{
	std::memset(_materias, 0, sizeof(AMateria *) * 4);
}

MateriaSource::MateriaSource(const MateriaSource& original)
	: _nMateria(4)
{
	for (int idx = 0; idx < _nMateria; idx++)
		if (original._materias[idx])
			_materias[idx] = original._materias[idx]->clone();
}

MateriaSource::~MateriaSource(void)
{
	for (int idx = 0; idx < _nMateria; idx++)
		if (_materias[idx])
			delete _materias[idx];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& original)
{
	for (int idx = 0; idx < _nMateria; idx++)
		if (original._materias[idx])
			_materias[idx] = original._materias[idx]->clone();
	return *this;
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	int	idx = 0;
	for (idx = 0; idx < _nMateria && _materias[idx] != 0; idx++)
		;
	if (idx == _nMateria)
		return ;
	_materias[idx] = materia;
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	int	idx = 0;
	for (idx = 0; idx < _nMateria; idx++)
		if (_materias[idx] && _materias[idx]->getType() == type)
			break ;
	if (idx == _nMateria)
		return (NULL);
	return (_materias[idx]->clone());
}
