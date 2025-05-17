/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:28:18 by htrindad          #+#    #+#             */
/*   Updated: 2025/05/17 18:25:24 by htrindad         ###   ########.fr       */
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
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount || withdrawal > _totalAmount)
		return false;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return true;
}

int Account::checkAmount() const { return _amount; }

static int Account::getTotalAmount() { return _totalAmount; }

static int Account::getNbDeposits() { return _nbDeposits; }

static int Account::getNbAccounts() { return _accountIndex; }

static void Account::_displayTimestamp() {}

static void Account::displayAccountsInfos()
{
	std::cout
		<< "Account Number: " << getNbAccounts() << '\n'
		<< "Total Amount: " << checkAmount() << '\n'
		<< "Number of Withdrawals: " << getNbDeposits() << '\n';
}
