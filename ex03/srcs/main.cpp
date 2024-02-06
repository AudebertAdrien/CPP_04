/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:00:15 by motoko            #+#    #+#             */
/*   Updated: 2024/02/06 18:21:26 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Character.hpp"

int	main(void)
{
	std::cout << std::string(50, '#') << std::endl;
	Character p1;
	std::cout << std::string(50, '#') << std::endl;
	Character p2("toto");
	std::cout << std::string(50, '#') << std::endl;
	Character p3(p2);
	std::cout << std::string(50, '#') << std::endl;
	return (0);
}
