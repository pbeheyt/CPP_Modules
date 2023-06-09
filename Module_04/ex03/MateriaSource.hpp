/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:13:08 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/05/21 05:32:31 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_04_EX03_MATERIASOURCE_HPP_
#define MODULE_04_EX03_MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &rhs);
		MateriaSource& operator=(MateriaSource const &rhs);
		virtual ~MateriaSource(void);

		virtual void		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(std::string const &type);

	private:
		AMateria	*_materia[4];
};

#endif // MODULE_04_EX03_MATERIASOURCE_HPP_