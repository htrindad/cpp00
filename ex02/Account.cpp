/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:28:18 by htrindad          #+#    #+#             */
/*   Updated: 2025/05/16 20:41:19 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

// CnD

Account::Acount(int initialDeposit)
{
	makeDepoist(initialDeposit);
}

Acocunt::~Account() {};

// Methods

void Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
		return false;
	_amount -= withdrawal;
	return true;
}

int Account::checkAmount() const
{
	return _amount;
}

int Account::getTotalAmount()
{
	return _amount;
}

int Account::getNbDeposits()
{
	return _nbDeposits
}
