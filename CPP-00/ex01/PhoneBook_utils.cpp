/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:54:51 by ojimenez          #+#    #+#             */
/*   Updated: 2024/02/18 16:29:34 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	displayTableHeader(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void	printString(std::string str)
{
	int	len = 0;

	if (str.length() == 10)
		std::cout << str << "|";
	else if (str.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".|";
	}
	else if (str.length() < 10)
	{
		len = str.length();
		while (len < 10)
		{
			std::cout << " ";
			len++;
		}
		std::cout << str;
		std::cout << "|";
	}
}

bool	digitComprovation(std::string str)
{
	int	i = 0;

	while (i < str.length())
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}