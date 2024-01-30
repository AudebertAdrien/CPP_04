/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:24:14 by motoko            #+#    #+#             */
/*   Updated: 2024/01/30 17:30:47 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	/*
	   const Animal* j = new Dog();
	   const Animal* i = new Cat();

	   std::cout << j->getType() << " " << std::endl;
	   std::cout << i->getType() << " " << std::endl;

	   i->makeSound(); //will output the cat sound!
	   j->makeSound();
	   meta->makeSound();

	   delete(j);
	   delete(i);
	   */
	delete(meta);
	return (0);
}
