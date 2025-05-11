/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:36:18 by htrindad          #+#    #+#             */
/*   Updated: 2025/05/11 18:35:03 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

//CD
Contact::Contact() {}
Contact::~Contact() {}
// Setters
void Contact::SetFirstName(std::string const fn) { Firstname = fn; }
void Contact::SetLastName(std::string const ln) { LastName = ln; }
void Contact::SetNickname(std::string const nick) { Nickname = nick; }
void Contact::SetPhoneNumber(std::string const pn) { PhoneNumber = pn; }
void Contact::SetDarkestSecret(std::string const ds) { DarkestSecret = ds; }
// Getters
const std::string Contact::GetFirstName() { return(FirstName); }
const std::string Contact::GetLastName() { return(LastName); }
const std::string Contact::GetNickname() { return(Nickname); }
const std::string Contact::GetPhoneNumber() { return(PhoneNumber); }
const std::string Contact::GetDarkestSecret() { return(DarkestSecret); }
