#include "Account.hpp"
#include <iostream>
#include <ctime>

// Constructor

Account::Account(int initial_deposit)
{
	this->makeDeposit(initial_deposit);
	_nbAccounts++;
}

// Getters
// Global

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

// Compte

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}


// Setters

// Functions
void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(nullptr);
    std::tm *ltm = std::localtime(&now);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", ltm);
    std::cout << buffer << " ";
}


// Compte
void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal < 0)
		return (false);
	if (this->_amount - withdrawal < 0)
		return (false);

	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	return (true);
}

