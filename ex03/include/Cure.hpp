/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bootjan <bootjan@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 17:37:25 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/15 16:21:13 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& original);
		Cure&	operator=(const Cure& original);
		virtual ~Cure() {};
		Cure*	clone(void) const;
		void	use(ICharacter& type);
};

#endif