/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:17:57 by motoko            #+#    #+#             */
/*   Updated: 2024/02/09 17:12:17 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Materia : public AMateria {
	public:
		Materia();
		Materia(const std::string name);
		Materia(const Materia &src);
		Materia& operator=(const Materia &src);
		~Materia();

		Materia*	clone() const;
	//	void		use(ICharacter& target);
};

#endif
