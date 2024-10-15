/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:41:03 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/15 14:00:24 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(0)
{
	return;
}

HumanB::~HumanB()
{
	std::cout << "Desctrutor: " << BOLD_ON YELLOW << this->_name << RESET <<" is now in jail!" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void)
{
	if (!this->_weapon)
		std::cout << BOLD_ON GREEN << this->_name << RESET << " attacks with their " << BOLD_ON YELLOW << "NOTHING!" << RESET << std::endl;
	else
		std::cout << BOLD_ON GREEN << this->_name << RESET << " attacks with their " << BOLD_ON YELLOW << this->_weapon->getType() << RESET << std::endl;
}
