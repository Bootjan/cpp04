/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bschaafs <bschaafs@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 14:56:27 by bschaafs      #+#    #+#                 */
/*   Updated: 2024/01/15 16:23:15 by bschaafs      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <cstring>

class MateriaSource : public IMateriaSource
{
	private:
		
		AMateria*	_materias[4];
		const int	_nMateria;
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& original);
		MateriaSource&	operator=(const MateriaSource& original);
		~MateriaSource();
		void			learnMateria(AMateria* materia);
		AMateria*		createMateria(std::string const& type);
};

#endif
