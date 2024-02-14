/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:02:37 by motoko            #+#    #+#             */
/*   Updated: 2024/02/14 17:49:17 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <iomanip>

class AMateria;
class Materia;

#include "ICharacter.hpp"

#define AMATERIA_LIST_SIZE 4

class Character : public ICharacter {
	public:
		Character();
		Character(std::string name);
		Character(Character &src);
		Character& operator=(Character &src);
		~Character();

		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void displayInventory();

	private:
		std::string _name;
		AMateria *_materia_list[AMATERIA_LIST_SIZE];
		AMateria *_ground_materia[AMATERIA_LIST_SIZE];
};

#endif
