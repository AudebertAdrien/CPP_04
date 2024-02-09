/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:02:37 by motoko            #+#    #+#             */
/*   Updated: 2024/02/09 11:39:01 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>

#include "AMateria.hpp"

class ICharacter {
	public:
		~ICharacter();
		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
