/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:28:15 by motoko            #+#    #+#             */
/*   Updated: 2024/02/05 14:35:17 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog &src);
		Dog& operator=(const Dog &src);
		virtual ~Dog();

		virtual void	makeSound() const;
		void	display_ideas();
	private:
		Brain 	*_brain;
};

#endif
