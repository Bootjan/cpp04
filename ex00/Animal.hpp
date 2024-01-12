/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 00:56:47 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/12 01:16:43 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal& original);
		~Animal();
		Animal&	operator=(const Animal& original);
		const std::string	getType(void) const;
		void				makeSound(void) const;
};

#endif