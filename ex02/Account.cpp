/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:54:39 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/27 18:16:12 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

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
	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created\n";
}

Account::Account(int initialDeposit)
{
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_amount = initialDeposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
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
	_totalAmount -= _amount;
	if (_nbAccounts > 0)
		_nbAccounts--;
}

// Methods

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";deposit:" << deposit
		<< ";amount:" << deposit + _amount
		<< ";nb_deposits:1\n";
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";withdrawal:";
	if (withdrawal > _amount || withdrawal > _totalAmount)
	{
		std::cout << "refused\n";
		return false;
	}
	std::cout << withdrawal
		<< ";amount:" << _amount - withdrawal
		<< ";nb_withdrawals:1\n";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
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
		<< '[' << std::setfill('0') << std::setw(2) << time.tm_year
		<< std::setfill('0') << std::setw(2) << time.tm_mon
		<< std::setfill('0') << std::setw(2) << time.tm_mday
		<< '_' << std::setfill('0') << std::setw(2) << time.tm_hour
		<< std::setfill('0') << std::setw(2) << time.tm_min << time.tm_sec << "] ";
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout
		<< "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() << '\n';
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex 
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << '\n';
}
