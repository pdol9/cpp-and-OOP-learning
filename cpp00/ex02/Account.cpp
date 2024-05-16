/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:47:28 by pdolinar          #+#    #+#             */
/*   Updated: 2023/01/14 16:39:35 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* deafault constructor & deconstrutor */
Account::Account( void ) {

	return;
}

Account::Account( int initial_deposit ) {

	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += checkAmount();
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" 
	<< checkAmount() << ";created" << std::endl;

	return;
}

Account::~Account( void ) {

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" 
	<< checkAmount() << ";closed" << std::endl;

	return;
}

void	Account::_displayTimestamp( void ) {

	time_t time_ptr;
    time_ptr = time(NULL);

	tm* tm_local = localtime(&time_ptr);
	std::cout << "[";
	std::cout << tm_local->tm_year + 1900 << "0" << 1 + tm_local->tm_mon << tm_local->tm_mday;
	std::cout << "_";
	std::cout << tm_local->tm_hour << tm_local->tm_min << tm_local->tm_sec + 1;
	std::cout << "]";
}

/* transaction functions */

void	Account::makeDeposit( int deposit ) {

	int old = checkAmount();
	_totalAmount += deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits += _nbDeposits;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" 
	<< old << ";deposit:" << deposit << ";amount:" << checkAmount()
	<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	if (_amount - withdrawal < 0) {
		_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";p_amount:" 
		<< checkAmount() << ";withdrawal:refused" << std::endl;
		return false;
	}
	int old = checkAmount();
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals += _nbWithdrawals;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" 
	<< old << ";withdrawal:" << withdrawal << ";amount:" << checkAmount()
	<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;

	return true;
}

int		Account::checkAmount( void ) const {
	return _amount;
}

/* getter functions  */

int	Account::getNbAccounts( void ) {

	return _nbAccounts;	
}

int	Account::getTotalAmount( void ) {

	return _totalAmount;
}

int	Account::getNbDeposits( void ) {

	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {

	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {

	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:"
	<< getTotalAmount() << ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const {

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" 
	<< checkAmount() << ";deposits:" << _nbDeposits << ";withdrawals:"
	<< _nbWithdrawals << std::endl;
}
