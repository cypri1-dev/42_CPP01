/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:42:56 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/17 13:13:51 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

bool    littleParsing(int argc)
{
    if (argc != 2)
    {
        std::cout << BOLD_ON RED << "2 arguments needed!" << RESET <<  std::endl;
        return (false);
    }
    return (true);
}

int main (int argc, char **argv)
{
    if (!littleParsing(argc))
        return (-1);
    Harl Harl;
    std::string level;
    level = argv[1];
    Harl.complain(level);
    return (0);
}