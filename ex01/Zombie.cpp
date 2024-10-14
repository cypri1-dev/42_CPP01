/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:52:21 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/14 16:13:10 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Zombie";
}

Zombie::~Zombie()
{
	std::cout << "Destructor: ";
	std::cout << BOLD_ON YELLOW << this->name << BOLD_OFF << " is really dead!" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << BOLD_ON GREEN << this->name << BOLD_OFF << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

bool	checkArg(std::string buffer)
{
	
	if (buffer.empty() || buffer.size() == 0)
		return false;
	for(size_t i = 0; i < buffer.size(); i++) {
		if(!std::isdigit(buffer[i]))
			return(false);
	}
	return true;
}