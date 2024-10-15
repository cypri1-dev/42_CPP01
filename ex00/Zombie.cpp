/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:25:20 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/15 11:21:57 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "DeadZombie";
}

Zombie::~Zombie()
{
	std::cout << "Destructor: ";
	std::cout << BOLD_ON YELLOW << this->_name << BOLD_OFF << " is really dead!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << BOLD_ON GREEN << this->_name << BOLD_OFF << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
