/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 01:02:46 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/15 21:39:12 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	this->_type = "Dog";
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog& original) : Animal(original._type)
{
	std::cout << "Dog copy constructor" << std::endl;
}

Dog&	Dog::operator=(const Dog& original)
{
	_type = original._type;
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark" << std::endl;
}
