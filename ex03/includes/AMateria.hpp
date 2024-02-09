/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:10:58 by motoko            #+#    #+#             */
/*   Updated: 2024/02/09 17:09:34 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

//#include "ICharacter.hpp"
class ICharacter;

class AMateria {
	public:
			AMateria(std::string const& type);

			virtual AMateria*	clone() const = 0;
			virtual void		use(ICharacter& target);

			std::string const&	getType() const;
	protected:
			std::string	_type;
};

#endif
