/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:14:31 by htrindad          #+#    #+#             */
/*   Updated: 2025/05/11 18:54:40 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>

#ifndef DEBUG
# define DEBUG 0
#endif

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
		bool oldest = false;
	public:
		Contact();
		~Contact();
		void Contact::SetFirstName(std::string fn);
		void Contact::SetLastName(std::string ln);
		void Contact::SetNickname(std::string nick);
		void Contact::SetPhoneNumber(std::string pn);
		void Contact::SetDarkestSecret(std::string ds);
		const std::string Contact::GetFirstName();
		const std::string Contact::GetLastName();
		const std::string Contact::GetNickName();
		const std::string Contact::GetPhoneNumber();
		const std::string Contact::GetDarkestSecret();
}

class PhoneBook
{
	private:
		Contact c[8];
		uint8_t max = 8;
		uint8_t count;
	public:
		PhoneBook();
		~PhoneBook();
		int PhoneBook::size();
		void PhoneBook::DisplayList();
		void PhoneBook::DisplayContact(int id);
		void PhoneBook::add(Contact cont);
}

#endif
