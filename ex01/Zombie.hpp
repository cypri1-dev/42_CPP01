/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:47:31 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/14 15:24:05 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#define BOLD_ON "\033[1m"
#define BOLD_OFF "\033[0m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"
#define GREEN "\033[32m"

#include <iostream>
#include <cstring>
#include <cstdlib>

class Zombie{
	private:
		std::string name;

	public:
		Zombie();
		void setName( std::string name);
		void announce( void );
		~Zombie();
};

bool checkArg(std::string buffer);
Zombie* zombieHorde( int N, std::string name );
#endif