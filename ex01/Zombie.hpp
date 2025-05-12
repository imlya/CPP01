/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:55:10 by imatek            #+#    #+#             */
/*   Updated: 2025/05/12 17:42:33 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	
	private :
		std::string _name;
		
	public :
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
		
	};
	
	Zombie* zombieHorde(int N, std::string name);
	
	#endif
	