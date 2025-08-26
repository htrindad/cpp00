/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:54:39 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/26 19:17:57 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

// CnD
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account()
{
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_amount	= 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	makeDeposit(0);
	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex << ';'
		<< "amount:" << _amount
		<< ";created\n";
}

Account::Account(int initialDeposit)
{
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	makeDeposit(initialDeposit);
	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex << ';'
		<< "amount:" << _amount
		<< ";created\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex << ';'
		<< "amount:" << _amount
		<< ";closed\n";
}

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
	_nbWithdrawals++;
	return true;
}

int Account::checkAmount() const { return _amount; }

int Account::getTotalAmount() { return _totalAmount; }

int Account::getNbDeposits() { return _totalNbDeposits; }

int Account::getNbAccounts() { return _nbAccounts; }

int Account::getNbWithdrawals() { return _totalNbWithdrawals; }

void Account::_displayTimestamp()
{
	time_t	timer = time(&timer);
	struct tm time = *localtime(&timer);

	time.tm_year += 1900;
	std::cout
		<< '[' << time.tm_year << time.tm_mon << time.tm_mday << '_'
		<< time.tm_hour << time.tm_min << time.tm_sec << "] ";
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout
		<< "accounts:" << getNbAccounts() << ';'
		<< "total:" << getTotalAmount() << ';'
		<< "desposits:" << getNbDeposits() << ';'
		<< "withdrawals:" << getNbWithdrawals() << '\n';
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout
		<< "accounts:" << this->_accountIndex << ';'
		<< "total:" << this->_amount << ';'
		<< "deposits:" << this->_nbDeposits << ';'
		<< "withdrawals:" << this->_nbWithdrawals << '\n';
}
