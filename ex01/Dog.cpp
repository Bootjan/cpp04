/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 01:02:46 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/15 22:32:52 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
	: Animal("Dog")
{
	_brain = new Brain();
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog& original)
	: Animal("Dog")
{
	_type = original._type;
	_brain = new Brain(*(original._brain));
}

Dog&	Dog::operator=(const Dog& original)
{
	_type = original._type;
	_brain = new Brain(*(original._brain));
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark" << std::endl;
}

void	Dog::eureka(const std::string& idea, size_t index)
{
	_brain->eureka(idea, index);	
}

void	Dog::printIdeas(void) const
{
	_brain->printIdeas();
}
