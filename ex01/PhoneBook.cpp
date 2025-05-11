/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 15:44:20 by htrindad          #+#    #+#             */
/*   Updated: 2025/05/11 15:48:22 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook()
	:	count(0)
{}

uint8_t PhoneBook::size() const { return count; }


