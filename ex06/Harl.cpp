/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:44:48 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/17 13:11:37 by cyferrei         ###   ########.fr       */
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

Harl::Level   Harl::getLevel(std::string &level)
{
    if (level == "DEBUG") return DEBUG;
    if (level == "INFO") return INFO;
    if (level == "WARNING") return WARNING;
    if (level == "ERROR") return ERROR;
    return OTHER;
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
    std::cout << GREEN << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << RESET << std::endl;
}

void Harl::info( void )
{
    std::cout << YELLOW << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << RESET << std::endl;
}

void Harl::warning( void )
{
    std::cout << MAGENTA << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error( void )
{
    std::cout << RED << "[ERROR]" << std::endl <<"This is unacceptable ! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level)
{
    switch (getLevel(level)) {
        case DEBUG:
            this->debug();
            this->info();
            this->warning();
            this->error();
            break;
        case INFO:
            this->info();
            this->warning();
            this->error();
            break;
        case WARNING:
            this->warning();
            this->error();
            break;
        case ERROR:
            this->error();
            break;
        default:
            std::cout << BOLD_ON << "Probably complaining about insignificant problems" << std::endl;
            break;
    }
}