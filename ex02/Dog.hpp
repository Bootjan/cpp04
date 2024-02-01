/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 01:00:52 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/15 21:41:10 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog(void);
		Dog(const Dog& original);
		Dog&	operator=(const Dog& original);
		~Dog();
		void	makeSound(void) const;
		void	eureka(const std::string& idea, size_t index);
		void	printIdeas(void) const;
};

#endif