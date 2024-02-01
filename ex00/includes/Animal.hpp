/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:28:15 by motoko            #+#    #+#             */
/*   Updated: 2024/01/31 15:47:37 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal *src);
		Animal& operator=(const Animal &src);
		~Animal();

		std::string		getType() const;
		virtual void	makeSound() const;
	protected:
		std::string	_type;
};

#endif
