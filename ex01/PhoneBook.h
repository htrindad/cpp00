/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:14:31 by htrindad          #+#    #+#             */
/*   Updated: 2025/05/09 19:52:24 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		unsigned long PhoneNumber;
		std::string DarkestSecret;
		bool oldest = false;
	public:
		Contact();
}

class PhoneBook
{
	private:
		Contact c[8];
		uint8_t max = 7;
}

#endif
