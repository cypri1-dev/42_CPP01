/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:27:44 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/16 16:46:10 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    return;
}

Harl::~Harl()
{
    std::cout << BOLD_ON YELLOW << "Desctructor: " << RESET << "Harl has been destroyed!" << std::endl;
}

bool    getInput(std::string &buffer)
{
    if (!std::getline(std::cin, buffer))
	{
		std::cout << BOLD_ON << "\033[31m\nCtrl+D detected\033[0m" << BOLD_OFF << std::endl;
		return(false);
	}
	return (true);
}

void Harl::debug( void )
{
    std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << RESET << std::endl;
}

void Harl::info( void )
{
    std::cout << YELLOW << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << RESET << std::endl;
}

void Harl::warning( void )
{
    std::cout << MAGENTA << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error( void )
{
    std::cout << RED << "This is unacceptable ! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level)
{
    static const struct
    {
        std::string keyword;
        void (Harl::*func)(void);    
    }
    selection[] =
    {
        { "DEBUG", &Harl::debug },
        { "INFO", &Harl::info },
        { "WARNING", &Harl::warning },
        { "ERROR", &Harl::error },
    };
    for (size_t i = 0; i < sizeof(selection) / sizeof(selection[0]); i++)
    {
        if(level == selection[i].keyword)
            (this->*selection[i].func)();
        if (i == (sizeof(selection) / sizeof(selection[0])))
            std::cout << BOLD_ON YELLOW << "Wrong level!" << std::endl;
    }
}