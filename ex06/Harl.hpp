/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:44:02 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/17 12:56:45 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

#define BOLD_ON "\033[1m"
#define BOLD_OFF "\033[0m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define MAGENTA "\033[35m"
#define RED "\033[31m"


class Harl {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        enum Level {DEBUG, INFO, WARNING, ERROR, OTHER};
        Level getLevel(std::string &level);
    
    public:
        Harl();
        void complain( std::string level);
        void run( void );
        ~Harl();
};

bool getInput(std::string &buffer);

#endif