/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bootjan <bootjan@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 17:26:38 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/15 16:21:06 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& original);
		Ice&	operator=(const Ice& original);
		virtual ~Ice() {};
		Ice*	clone(void) const;
		void	use(ICharacter& type);
};

#endif