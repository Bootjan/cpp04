/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bschaafs <bschaafs@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 12:36:16 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/12 12:36:32 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
