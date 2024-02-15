/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:29:37 by motoko            #+#    #+#             */
/*   Updated: 2024/02/15 15:49:12 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const std::string name);
		Ice(const Ice &src);
		Ice& operator=(const Ice &src);
		~Ice();

		virtual AMateria*   clone() const;
        virtual void        use(ICharacter& target);
};

#endif
