/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 01:07:21 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/15 21:39:21 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	_type = "Cat";
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat& original) : Animal(original._type)
{
	std::cout << "Cat copy constructor" << std::endl;
}

Cat&	Cat::operator=(const Cat& original)
{
	_type = original._type;
	std::cout << "Cat copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
