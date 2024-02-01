/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bootjan <bootjan@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 21:55:09 by bootjan       #+#    #+#                 */
/*   Updated: 2024/01/15 15:59:09 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria() {};
		AMateria(const std::string& type);
		AMateria(const AMateria& original);
		virtual ~AMateria() {};
		AMateria&	operator=(const AMateria& original);

		const std::string&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif