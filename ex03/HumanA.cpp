/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:25:58 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/15 13:52:35 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	return;
}

HumanA::~HumanA()
{
	std::cout << "Desctrutor: " << BOLD_ON YELLOW << this->_name << RESET <<" is now in jail!" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << BOLD_ON GREEN << this->_name << RESET << " attacks with their " << BOLD_ON YELLOW << this->_weapon.getType() << RESET << std::endl;
}