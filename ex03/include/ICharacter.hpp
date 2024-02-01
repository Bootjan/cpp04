/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bschaafs <bschaafs@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 13:17:58 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/15 16:26:35 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <cstring>
# include <iostream>

class AMateria;

class ICharacter
{
	public:
		ICharacter() {};
		ICharacter(const ICharacter& original) = delete;
		ICharacter&	operator=(const ICharacter& original) = delete;
		virtual ~ICharacter() {};
		virtual const std::string&	getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;
};

#endif
