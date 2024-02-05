/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:21:35 by motoko            #+#    #+#             */
/*   Updated: 2024/02/05 15:02:10 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

static int index = 0;

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
	std::stringstream	sstm;

	for(int i = 0; i < 100; i++)
	{
		sstm.clear();
		sstm.str("");
		sstm << "INDEX : " << index << " => idea :" << i + 1;
		this->ideas_list[i] = sstm.str();
	}
	index++;
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain constructor by copy called" << std::endl;
	*this = src;
}

Brain& Brain::operator=(const Brain &src) {
	std::cout << "Brain constructor assignment operator called" << std::endl;
	if (this != &src) {
		for(int i = 0; i < 100; i++)
			this->ideas_list[i] = src.ideas_list[i]; 
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::get_idea() {
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas_list[i] << std::endl;
}
