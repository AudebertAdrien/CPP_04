/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:24:14 by motoko            #+#    #+#             */
/*   Updated: 2024/02/01 12:07:35 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{

	std::cout << std::string(50,'#') << std::endl;
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "getType : " <<  animal->getType() << " " << std::endl;
	std::cout << "getType : " <<  dog->getType() << " " << std::endl;
	std::cout << "getType : " <<  cat->getType() << " " << std::endl;

	dog->makeSound();
	cat->makeSound();
	animal->makeSound();

	delete(dog);
	delete(cat);
	delete(animal);

	std::cout << std::string(50,'#') << std::endl;

	const WrongAnimal* wAnimal = new WrongAnimal();
	const WrongAnimal* wCat = new WrongCat();

	wAnimal->makeSound();
	wCat->makeSound();

	delete(wAnimal);
	delete(wCat);
	return (0);
}
