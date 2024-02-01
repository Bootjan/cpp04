/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bootjan <bootjan@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 22:03:38 by bootjan       #+#    #+#                 */
/*   Updated: 2024/01/15 16:00:32 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const std::string& type)
	: _type(type)
{
}

AMateria::AMateria(const AMateria& original)
	: _type(original._type)
{
}

AMateria&	AMateria::operator=(const AMateria& original)
{
	_type = original._type;
	return *this;
}

const std::string&	AMateria::getType(void) const
{
	return _type;
}

void	AMateria::use(ICharacter& type)
{
	std::cout 	<< "* I don't know what this object does to "
				<< type.getName() << std::endl;
}
