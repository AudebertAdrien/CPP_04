/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:28:15 by motoko            #+#    #+#             */
/*   Updated: 2024/02/06 11:42:14 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal {
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &src);
		AAnimal& operator=(const AAnimal &src);
		virtual ~AAnimal();

		std::string		getType() const;
		virtual void	makeSound() const = 0;
	protected:
		std::string	_type;
};

#endif
