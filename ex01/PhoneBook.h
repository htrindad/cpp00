/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:14:31 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/26 18:14:26 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <stdint.h>
#include <cstdlib>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		Contact();
		~Contact();
		void SetFirstName(std::string fn);
		void SetLastName(std::string ln);
		void SetNickname(std::string nick);
		void SetPhoneNumber(std::string pn);
		void SetDarkestSecret(std::string ds);
		const std::string GetFirstName();
		const std::string GetLastName();
		const std::string GetNickname();
		const std::string GetPhoneNumber();
		const std::string GetDarkestSecret();
};

class PhoneBook
{
	private:
		Contact c[8];
		uint8_t max;
		uint8_t count;
	public:
		PhoneBook();
		~PhoneBook();
		int size();
		void DisplayList();
		void DisplayContact(int id);
		void add(Contact cont);
};

#endif
