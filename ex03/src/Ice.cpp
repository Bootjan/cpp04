/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:36:02 by bschaafs          #+#    #+#             */
/*   Updated: 2024/01/15 22:10:12 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
	: AMateria("ice")
{
}

Ice::Ice(const Ice& original)
	: AMateria(original._type)
{
	_type = original._type;
}

Ice&	Ice::operator=(const Ice& original)
{
	_type = original._type;
	return *this;
}

Ice*	Ice::clone(void) const
{
	Ice*	ret = new Ice();
	ret->_type = _type;
	return (ret);
}

void	Ice::use(ICharacter& type)
{
	std::cout	<< "* shoots an ice bolt at " << type.getName()
				<< " *" << std::endl;
}

