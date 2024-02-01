/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bschaafs <bschaafs@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 15:40:57 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/15 18:27:45 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain& original)
{
	std::cout << "Brain copy constructor" << std::endl;
	for (size_t i = 0; i < this->_nideas; i++)
		this->_ideas[i] = original._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor" << std::endl;
}

Brain&	Brain::operator=(const Brain& original)
{
	std::cout << "Brain copy assignment operator" << std::endl;
	for (size_t i = 0; i < this->_nideas; i++)
			this->_ideas[i] = original._ideas[i];
	return *this;
}

void	Brain::eureka(const std::string& idea, size_t index)
{
	if (index > 99)
		return ;
	this->_ideas[index] = idea;
}

void	Brain::printIdeas(void) const
{
	for (int idx = 0; idx < 100; idx++)
		if (!(_ideas[idx].empty()))
			std::cout << _ideas[idx] << std::endl;
}
