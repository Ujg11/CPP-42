/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:54:51 by ojimenez          #+#    #+#             */
/*   Updated: 2024/02/13 12:55:33 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	displayTableHeader(void)
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|	 Index   |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void	printString(std::string str)
{
	int	len = 0;

	if (str.length() == 10)
		std::cout << str << "|";
	else if (str.length() > 10)
	{
		for (int i = 0; i < 10; i++)
			std::cout << str[i];
		std::cout << ".|";
	}
	else if (str.length() < 10)
	{
		len = str.length();
		std::cout << str;
		while (len < 10)
		{
			std::cout << " ";
			len++;
		}
		std::cout << ".|";
	}
}