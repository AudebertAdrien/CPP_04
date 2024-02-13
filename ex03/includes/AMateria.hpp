/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:10:58 by motoko            #+#    #+#             */
/*   Updated: 2024/02/13 14:29:19 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria {
	public:
			AMateria(std::string const& type);

			std::string const&	getType() const;

			virtual AMateria*	clone() const = 0;
			virtual void		use(ICharacter & target);

	protected:
			std::string	_type;
};

#endif
