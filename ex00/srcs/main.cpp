/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:24:14 by motoko            #+#    #+#             */
/*   Updated: 2024/01/31 15:21:38 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	std::cout << std::string(50,'#') << std::endl;
	const Animal* j = new Dog();
	std::cout << std::string(50,'#') << std::endl;
	const Animal* i = new Cat();
	std::cout << std::string(50,'#') << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete(meta);
	delete(j);
	delete(i);
	return (0);
}
