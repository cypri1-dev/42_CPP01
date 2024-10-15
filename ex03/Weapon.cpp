/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:17:13 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/15 13:56:41 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->_type = "No Weapon";
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
	std::cout << "Destructor: ";
	std::cout << BOLD_ON YELLOW << this->_type << BOLD_OFF << " has been confiscated!" << std::endl;
}

std::string& Weapon::getType( void )
{
	return(this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}