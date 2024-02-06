/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:24:14 by motoko            #+#    #+#             */
/*   Updated: 2024/02/06 14:04:34 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "Brain.hpp"

int main(void)
{
	std::cout << std::string(50,'#') << std::endl;
	//AAnimal* b = new AAnimal();	
	
	const int arraySize = 6;
	AAnimal* animalArray[arraySize];

	for (int i = 0; i < arraySize / 2; i++) {
		animalArray[i] = new Dog();
	}
	for (int i = arraySize / 2; i < arraySize; i++) {
		animalArray[i] = new Cat();
	}

	std::cout << std::string(50,'#') << std::endl;
	for (int i = 0; i < arraySize; i++) {
		delete animalArray[i];
	}

	std::cout << std::string(50,'#') << std::endl;
	std::cout << std::string(50,'#') << std::endl;

    Dog originalDog;
	std::cout << std::string(50,'#') << std::endl;

    Dog copiedDog = originalDog;
	std::cout << std::string(50,'#') << std::endl;

	Dog assignDog;
	std::cout << std::string(50,'#') << std::endl;
	assignDog = originalDog;
	std::cout << std::string(50,'#') << std::endl;
	
	assignDog.display_ideas();
	return (0);
}
