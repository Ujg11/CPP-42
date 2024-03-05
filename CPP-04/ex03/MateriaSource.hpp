/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:58:27 by ojimenez          #+#    #+#             */
/*   Updated: 2024/03/04 20:47:15 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_materias[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		MateriaSource &operator=(const MateriaSource &cpy);
		~MateriaSource();

		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const &type);
};
