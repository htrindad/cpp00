/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:28:18 by htrindad          #+#    #+#             */
/*   Updated: 2025/05/17 18:15:19 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

// CnD

Account::Account() {};

Account::Account(int initialDeposit)
{
	makeDeposit(initialDeposit);
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

static int Account::getTotalAmount()
{
	return _amount;
}

static int Account::getNbDeposits()
{
	return _nbDeposits;
}

static int Account::getNbAccounts()
{
	return _accountIndex;
}

static void Account::displayAccountsInfos()
{
	std::cout
		<< "Account Number: " << getNbAccounts() << '\n'
		<< "Total Amount: " << getTotalAmount() << '\n'
		<< "Number of Withdrawals: " << getNbDeposits() << '\n';
}
