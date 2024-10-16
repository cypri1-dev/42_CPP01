/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:26:53 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/16 16:49:08 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl Harl;
    std::string buffer;
    
    while(1)
    {
        std::cout << "Please, enter a " << BOLD_ON YELLOW << "level " << RESET << "between:" << YELLOW << " DEBUG - INFO - WARNING - ERROR" << RESET << " or " << BOLD_ON << "EXIT" << BOLD_OFF << ": ";
        if(!getInput(buffer))
            break;
        if (buffer == "EXIT")
            return (0);
        Harl.complain(buffer);
    }
    return (0);
}