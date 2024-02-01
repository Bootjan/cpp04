/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:07:49 by bschaafs          #+#    #+#             */
/*   Updated: 2024/01/15 22:04:29 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>
# include <cstring>

class Character : public ICharacter
{
	protected:
		std::string	_name;
		AMateria*	_materias[4];
		int			_equipped[4];
		const int	_nMateria;
	public:
		Character();
		Character(const std::string& name);
		Character(const Character& original);
		Character&	operator=(const Character& original);
		~Character();

		const std::string&	getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif