/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bschaafs <bschaafs@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 13:19:38 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/15 16:26:19 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_HPP
# define IMATERIA_HPP

# include "AMateria.hpp"
# include <iostream>

class IMateriaSource
{
	public:
		IMateriaSource() {};
		IMateriaSource(const IMateriaSource& original) = delete;
		IMateriaSource&	operator=(const IMateriaSource& original) = delete;
		virtual ~IMateriaSource() {};
		virtual void		learnMateria(AMateria* materia) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif
