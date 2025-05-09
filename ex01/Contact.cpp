/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:36:18 by htrindad          #+#    #+#             */
/*   Updated: 2025/05/09 19:48:43 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

Contact()
{
	FirstName = NULL;
	LastName = NULL;
	Nickname = NULL;
	PhoneNumber = 0;
	DarkestSecret = NULL;
	oldest = false;
}

Contact::SetFirstName(std::string fn)
{
	Firstname = fn;
}

Contact::SetLastName(std::string ln)
{
	LastName = ln;
}

Contact::SetNickname(std::string nick)
{
	Nickname = nick;
}

Contact::SetPhoneNumber(unsigned long pn)
{
	PhoneNumber = pn;
}

Contact::SetDarkestSecret(std::string ds)
{
	DarkestSecret = ds;
}

Contact::SetOldest(bool old)
{
	oldest = old;
}
