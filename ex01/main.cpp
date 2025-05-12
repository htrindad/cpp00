/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:29:35 by htrindad          #+#    #+#             */
/*   Updated: 2025/05/12 20:02:48 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

static std::string inp(std::string prompt)
{
	std::string input;

	while (1)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (!input.empty())
			break ;
		std::cout << " >> This field cannot be empty. Please try again.\n";
	}
	return input;
}

static bool ind(PhoneBook pb)
{
	std::string inp;
	int index;

	pb.DisplayList();
	std::cout << "Input the index to view details (or press enter to cancel)> ";
	std::getline(std::cin, inp);
	if (inp.empty())
		return true;
	index = std::atoi(inp.c_str());
	if (index < 1 || index > pb.size())
		std::cout << "Invalid Index. Please try again.\n";
	else
		pb.DisplayContact(index - 1);
	return false;
}

static inline bool check(std::string c, PhoneBook &pb)
{
	Contact cont;

	if (c == "EXIT")
		return true;
	if (c == "ADD")
	{
		cont.SetFirstName(inp("First Name: "));
		if (cont.GetFirstName().empty()) return true;
		cont.SetLastName(inp("Last Name: "));
		if (cont.GetLastName().empty()) return true;
		cont.SetNickname(inp("Nickname: "));
		if (cont.GetNickname().empty()) return true;
		cont.SetPhoneNumber(inp("Phone Number: "));
		if (cont.GetPhoneNumber().empty()) return true;
		cont.SetDarkestSecret(inp("Darkest Secret: "));
		if (cont.GetDarkestSecret().empty()) return true;
		pb.add(cont);
	}
	if (c == "SEARCH")
	{
		if (!pb.size())
			std::cout << "PhoneBook is empty.\n";
		else
			while (1)
				if (ind(pb))
					break ;
	}
	return false;
}

int main()
{
	PhoneBook pb;
	std::string command;

	while (1)
	{
		std::cout << "PhoneBook> ";
		std::cin >> command;
		std::cin.ignore();
		if (std::cin.eof())
		{
			std::cout << '\n';
			break ;
		}
		if (check(command, pb))
			break ;
	}
	return 0;
}
