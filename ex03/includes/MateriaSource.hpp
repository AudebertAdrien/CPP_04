/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:49 by motoko            #+#    #+#             */
/*   Updated: 2024/02/15 14:28:08 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include <iostream>

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(const std::string name);
		MateriaSource(const MateriaSource &src);
		MateriaSource& operator=(const MateriaSource &src);
		~MateriaSource();

		void learnMateria(AMateria* src);
};

#endif
