/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:02:37 by motoko            #+#    #+#             */
/*   Updated: 2024/02/09 17:08:13 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Materia.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(std::string name);
		Character(Character &src);
		Character& operator=(Character &src);
		~Character();

		std::string const& getName() const;
		//void equip(AMateria* m);
		//void use(int idx, ICharacter& target);

	private:
		std::string _name;
		//AMateria** materia_list;
};

#endif
