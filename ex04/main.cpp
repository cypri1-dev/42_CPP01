/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:11:57 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/15 15:30:02 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#define BOLD_ON "\033[1m"
#define BOLD_OFF "\033[0m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

void replaceOcc(std::ifstream &inFile, std::ofstream &outFile, std::string search, std::string replace)
{
	std::string line;
	size_t pos;

	while(std::getline(inFile, line))
	{
		while((pos = line.find(search)) != std::string::npos)
		{
			line = line.substr(0, pos) + replace + line.substr(pos + search.length());
		}
		outFile << line << std::endl;
	}
}

bool initFiles(char **argv, std::ifstream *inFile, std::ofstream *outFile)
{
	std::string nameIn = argv[1];
	std::string nameOut = nameIn + ".replace";
	(*inFile).open(nameIn.c_str(), std::fstream::in);
	(*outFile).open(nameOut.c_str(), std::fstream::out);
	if (!inFile || !outFile)
	{
		std::cout << BOLD_ON RED << "Fail to init infile - outfile!" << RESET << std::endl;
		(*inFile).close();
		(*outFile).close();
		return (false);
	}
	return (true);
	
}

bool parsing(int argc)
{
	if (argc != 4)
	{
		std::cout << BOLD_ON RED << "4 arguments needed!" << RESET << std::endl;
		return false;
	}
	return (true);
}

int main(int argc, char **argv)
{
	(void)argv;
	
	std::ifstream inFile;
	std::ofstream outFile;
	parsing(argc);
	if (!initFiles(argv, &inFile, &outFile))
		return (-1);
	replaceOcc(inFile, outFile, argv[2], argv[3]);
	inFile.close();
	outFile.close();
	return (0);
}