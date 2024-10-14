/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:17:13 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/14 17:22:53 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	std::cout << "Destructor: ";
	std::cout << BOLD_ON YELLOW << this->type << BOLD_OFF << " has been confiscated!" << std::endl;
}

std::string& Weapon::getType( void )
{
	return(this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}