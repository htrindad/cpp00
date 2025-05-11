/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 15:44:20 by htrindad          #+#    #+#             */
/*   Updated: 2025/05/11 18:57:18 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

static std::string t10(const std::string s)
{
	if (s.size() <= 10) return s;
	return s.substr(0, 9) + '.';
}

int PhoneBook::size()
{
	for (int i = 0; i < max; i++)
		if (!c[i])
			return i;
	return 8;
}

void PhoneBook::DisplayList()
{
	std::cout
		<< std::setw(10) << "Index" << '|'
		<< std::setw(10) << "First Name" << '|'
		<< std::setw(10) << "Last Name" << '|'
		<< std::setw(10) << "Nickname" << '\n';
	for (int i = 0; i < count; i++)
	{
		const Contact &cont[i] = c[i];
		std::cout
			<< std::setw(10) << i+1 << '|'
			<< std::setw(10) << t10(cont.GetFirstName()) << '|'
			<< std::setw(10) << t10(cont.GetLastName()) << '|'
			<< std::setw(10) << t10(cont.GetNickName()) << '|' << '\n';
	}
}

void PhoneBook::DisplayContact(int id)
{
	if (idx < 0 || idx >= count)
	{
		std::cout << "Invalid Index.\n";
		return ;
	}
	const Contact &cont = c[id];
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
