/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:23:25 by motoko            #+#    #+#             */
/*   Updated: 2024/02/05 15:01:27 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP 
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {
	public:
		Brain();
		Brain(const Brain &src);
		Brain& operator=(const Brain &src);
		~Brain();
	
		void	get_idea();
	private:
		std::string	ideas_list[100];
};

#endif
