/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:19:24 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/14 16:42:07 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define BOLD_ON "\033[1m"
#define BOLD_OFF "\033[0m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"
#define GREEN "\033[32m"

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str; //ptr sur string
	std::string& stringREF = str; // reference sur string

	std::cout << BOLD_ON << "---- ADRESSES ----" << BOLD_OFF << std::endl << std::endl;
	std::cout << BOLD_ON YELLOW << "Adresse" << RESET << " de la string en memoire: " << &str << std::endl;
	std::cout << BOLD_ON YELLOW << "Adresse" << RESET << " stockee dans stringPTR: " << stringPTR << std::endl;
	std::cout << BOLD_ON YELLOW << "Adresse" << RESET << " stockee dans stringREF: " << &stringREF << std::endl << std::endl; 
	std::cout << BOLD_ON << "---- VALEURS ----" << BOLD_OFF << std::endl << std::endl;
	std::cout << BOLD_ON GREEN << "Valeur" << RESET << " de la string: " << str << std::endl;
	std::cout << BOLD_ON GREEN << "Valeur" << RESET << " pointee par stringPTR: " << *stringPTR << std::endl;
	std::cout << BOLD_ON GREEN << "Valeur" << RESET << " pointee par stringREF: " << stringREF << std::endl;
	return (0);
}