/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bschaafs <bschaafs@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 13:24:21 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/15 18:21:01 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		static const size_t	_nideas = 100;
		std::string			_ideas[100];
	public:
		Brain(void);
		Brain(const Brain& orignal);
		Brain&	operator=(const Brain& original);
		~Brain();
		void	eureka(const std::string& idea, size_t index);
		void	printIdeas(void) const;
};

#endif