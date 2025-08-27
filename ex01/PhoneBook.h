/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:14:31 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/27 17:08:28 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <stdint.h>
#include <cstdlib>
#include "Contact.h"

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
