/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 15:44:20 by htrindad          #+#    #+#             */
/*   Updated: 2025/05/16 19:57:01 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

// CD
PhoneBook::PhoneBook()
{
	Contact c;
	max = 7;
	count = 0;
}
PhoneBook::~PhoneBook() {}

// Methods
static std::string t10(const std::string s)
{
	if (s.size() <= 10) return s;
	return s.substr(0, 9) + '.';
}

int PhoneBook::size()
{
	for (int i = 0; i < max; i++)
		if (c[i].GetFirstName().empty())
			return i;
	return 8;
}

void PhoneBook::DisplayList()
{
	std::cout
		<< std::setw(10) << "Index" << '|'
		<< std::setw(10) << "First Name" << '|'
		<< std::setw(10) << "Last Name" << '|'
		<< std::setw(10) << "Nickname" << "|\n";
	for (int i = 0; i < size(); i++)
	{
		Contact &cont = c[i];
		if (cont.GetFirstName().empty())
			break ;
		std::cout
			<< std::setw(10) << i+1 << '|'
			<< std::setw(10) << t10(cont.GetFirstName()) << '|'
			<< std::setw(10) << t10(cont.GetLastName()) << '|'
			<< std::setw(10) << t10(cont.GetNickname()) << '|' << '\n';
	}
}

void PhoneBook::DisplayContact(int id)
{
	Contact &cont = c[id];
	if (id < 0 || id > max)
	{
		std::cout << "Invalid Index.\n";
		return ;
	}
	std::cout
		<< "First Name: "<< cont.GetFirstName() << '\n'
		<< "Last Name: "<< cont.GetLastName() << '\n'
		<< "Nickname: "<< cont.GetNickname() << '\n'
		<< "Phone Number: " << cont.GetPhoneNumber() << '\n'
		<< "Darkest Secret: " << cont.GetDarkestSecret() << '\n';
}

void PhoneBook::add(Contact cont)
{
	c[count] = cont;
	if (count < max)
		count++;
	else
		count = 0;
}
