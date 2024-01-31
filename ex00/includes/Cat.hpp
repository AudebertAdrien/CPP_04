/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:28:15 by motoko            #+#    #+#             */
/*   Updated: 2024/01/31 15:19:15 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat *src);
		Cat& operator=(const Cat &src);
		~Cat();

		virtual void	makeSound() const;
};

#endif
