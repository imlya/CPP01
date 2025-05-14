/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:55:21 by imatek            #+#    #+#             */
/*   Updated: 2025/05/14 20:00:00 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string ss =  av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		
		std::ofstream ofs;
		ofs.open(av[1]);
		ofs.close();
		// if (ofs.fail())
		// 	std::cerr << "error : Open file failed." << std::endl;
	}
	else
		std::cerr << "error : Please enter 3 parameters." << std::endl;
	return (0);
}

		// SUJET
// ouvrire <filename>
// copier son contenu dans un nouveau fichier
// <filename>.replace : remplacer s1 par s2 
// tout std::string OK sauf std::string.replace
// gerer les != inputs et errors