/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:47:10 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/14 16:12:25 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	bool input = false;
	std::string buffer;
	int nbZombie = 0;
	(void)horde;
	
	std::cout << BOLD_ON << "Enter the number of zombie desires: " << BOLD_OFF << std::endl;
	while(!input)
	{
		std::cout << BOLD_ON << YELLOW << "TIP" << BOLD_OFF ": Input cannot be empty - Only DIGITS!: ";
		if (!std::getline(std::cin, buffer))
			break;
		if (checkArg(buffer))
		{
			nbZombie = std::atoi(buffer.c_str());
			if (nbZombie > 0 && nbZombie <= 150) {	
				input = true;
				buffer = "";
			}
		}
	}
	horde = zombieHorde(nbZombie, "Zombiiessss");
	for (int i = 0; i < nbZombie; i++){
		horde[i].announce();
	}
	delete []horde;
	return (0);
}