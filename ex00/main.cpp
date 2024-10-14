/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:20:40 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/14 14:35:26 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

# define NB_ZOMBIE 4

int main(void)
{
	std::cout << "---- ON STACK ! ----" << std::endl << std::endl;
	Zombie z[NB_ZOMBIE];
	const std::string name[NB_ZOMBIE] = {
		"Nathan",
		"Warrox",
		"Brakis",
		"Robin",
	};
	for(int i = 0; i < NB_ZOMBIE; i++) {

		z[i].setName(name[i]);
		z[i].announce();
	}
	randomChump("Chump");
	std::cout << std::endl << "---- ON HEAP ! ----" << std::endl << std::endl;
	Zombie *heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete(heapZombie);
	return (0);
}