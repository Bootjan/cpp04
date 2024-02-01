/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bootjan <bootjan@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 01:07:21 by bootjan       #+#    #+#                 */
/*   Updated: 2024/01/15 18:29:02 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat& original) : Animal("Cat")
{
	_brain = new Brain(*(original._brain));
	_type = original._type;
}

Cat&	Cat::operator=(const Cat& original)
{
	_type = original._type;
	_brain = new Brain(*(original._brain));
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

void	Cat::eureka(const std::string& idea, size_t index)
{
	_brain->eureka(idea, index);	
}

void	Cat::printIdeas(void) const
{
	_brain->printIdeas();
}
