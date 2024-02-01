/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bschaafs <bschaafs@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 12:35:18 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/12 12:36:01 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "Giraffe";
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->_type = type;
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
	this->_type = original._type;
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& original)
{
	this->_type = original._type;
	std::cout << "WrongAnimal copy assignment operator" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

const std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wruf?" << std::endl;
}
