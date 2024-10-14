/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:21:05 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/14 14:28:18 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#define BOLD_ON "\033[1m"
#define BOLD_OFF "\033[0m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"
#define GREEN "\033[32m"

# include <iostream>

class Zombie {
	private:
		std::string name;

	public:
		Zombie();
		void announce( void );
		void setName(std::string name);
		~Zombie();
};

void	randomChump( std::string name );
Zombie* newZombie( std:: string name );

#endif