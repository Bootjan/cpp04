/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bootjan <bootjan@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 01:03:04 by bootjan       #+#    #+#                 */
/*   Updated: 2024/01/15 18:29:17 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	_brain;
	public:
		Cat(void);
		Cat(const Cat& original);
		~Cat();
		Cat&	operator=(const Cat& original);
		void	makeSound(void) const;
		void	eureka(const std::string& idea, size_t index);
		void	printIdeas(void) const;
};

#endif