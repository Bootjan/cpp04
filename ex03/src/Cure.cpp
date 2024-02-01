/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bootjan <bootjan@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 17:37:45 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/15 15:42:38 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void)
	: AMateria("cure")
{
	_type = "cure";
}

Cure::Cure(const Cure& original)
	: AMateria(original._type)
{
	_type = original._type;
}

Cure&	Cure::operator=(const Cure& original)
{
	_type = original._type;
	return *this;
}

Cure*	Cure::clone(void) const
{
	Cure*	ret = new Cure();
	return (ret);
}

void	Cure::use(ICharacter& type)
{
	std::cout 	<< "* heals " << type.getName()
				<< "'s wounds *" << std::endl;
}
