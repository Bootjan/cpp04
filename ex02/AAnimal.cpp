/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bootjan <bootjan@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 00:56:45 by bootjan       #+#    #+#                 */
/*   Updated: 2024/01/12 17:04:08 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

Animal::Animal(void)
{
	this->_type = "Giraffe";
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal& original)
{
	this->_type = original._type;
	std::cout << "Animal copy constructor" << std::endl;
}

Animal&	Animal::operator=(const Animal& original)
{
	this->_type = original._type;
	std::cout << "Animal copy assignment operator" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

const std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Wruf?" << std::endl;
}
