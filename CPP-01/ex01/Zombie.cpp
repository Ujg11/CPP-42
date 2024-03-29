/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:31:24 by ojimenez          #+#    #+#             */
/*   Updated: 2024/02/20 12:10:36 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie(void)
{

}

 Zombie::~ Zombie(void)
{
	std::cout << this->_name << ": Aaahhhhgggg...(died)" << std::endl;

}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string Zombie::getName(void) const
{
	return (this->_name);
}
