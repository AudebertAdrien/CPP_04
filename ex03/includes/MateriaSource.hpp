/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:49 by motoko            #+#    #+#             */
/*   Updated: 2024/02/15 16:33:04 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include <iostream>

#include "IMateriaSource.hpp"

#define MATERIA_SOURCE_SIZE 4 

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
