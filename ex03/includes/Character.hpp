/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:02:37 by motoko            #+#    #+#             */
/*   Updated: 2024/02/09 14:02:58 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>

#include "ICharacter.hpp"
#include "Character.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(std::string name);
		Character(Character &src);
		Character& operator=(Character &src);
		~Character();

		std::string const& getName() const;
		void equip(AMateria* m);

	private:
		std::string _name;
};

#endif
