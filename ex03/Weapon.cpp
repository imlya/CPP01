/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:02:40 by imatek            #+#    #+#             */
/*   Updated: 2025/05/13 20:36:43 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon called" << std::endl;
	return ;
}

Weapon::~Weapon()
{
	
}

std::string Weapon::getType() const
{
	return(_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}
