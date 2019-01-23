/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 23:26:45 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/22 23:26:49 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"
//bold colors
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"
# define BWHITE "\033[1;37m"
//underline colors
# define UBLACK "\033[4;30m"
# define URED "\033[4;31m"
# define UGREEN "\033[4;32m"
# define UYELLOW "\033[4;33m"
# define UBLUE "\033[4;34m"
# define UPURPLE "\033[4;35m"
# define UCYAN "\033[4;36m"
# define UWHITE "\033[4;37m"
//background colors
# define BABLACK "\033[40m"
# define BARED "\033[41m"
# define BAGREEN "\033[42m"
# define BAYELLOW "\033[43m"
# define BABLUE "\033[44m"
# define BAPURPLE "\033[45m"
# define BACYAN "\033[46m"
# define BAWHITE "\033[47m"
//high Intensity
# define HBLACK "\033[0;90m"
# define HRED "\033[0;91m"
# define HGREEN "\033[0;92m"
# define HYELLOW "\033[0;93m"
# define HBLUE "\033[0;94m"
# define HPURPLE "\033[0;95m"
# define HCYAN "\033[0;96m"
# define HWHITE "\033[0;97m"
//bold high Intensity
# define HBBLACK "\033[1;90m"
# define HBRED "\033[1;91m"
# define HBGREEN "\033[1;92m"
# define HBYELLOW "\033[1;93m"
# define HBBLUE "\033[1;94m"
# define HBPURPLE "\033[1;95m"
# define HBCYAN "\033[1;96m"
# define HBWHITE "\033[1;97m"
//hight intensity backgrounds
# define HBABLACK "\033[0;100m"
# define HBARED "\033[0;101m"
# define HBAGREEN "\033[0;102m"
# define HBAYELLOW "\033[0;103m"
# define HBABLUE "\033[0;104m"
# define HBAPURPLE "\033[0;105m"
# define HBACYAN "\033[0;106m"
# define HBAWHITE "\033[0;107m"
//reset
# define RESET "\033[0m"

//
int			Account::_nbAccounts = 0;
int			Account::_totalAmount = 0;
int			Account::_totalNbDeposits = 0;
int			Account::_totalNbWithdrawals = 0;


Account::Account(void) :
	_accountIndex(getNbAccounts()),
	_amount(0),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;

	this->_displayTimestamp();
	std::cout << BGREEN;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	std::cout << RESET;
}

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_totalAmount += this->_amount;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;

	Account::_displayTimestamp();
	std::cout << BGREEN;
	std::cout << "index:" 	<< this->_accountIndex;
	std::cout << ";amount:"	<< this->_amount;
	std::cout << ";created" 	<< std::endl;
	std::cout << RESET;
	return ;
}

Account::~Account(void)
{


	this->_totalAmount -= this->_amount;
	Account::_displayTimestamp();
	std::cout << BRED;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	std::cout << RESET;
	this->_accountIndex--;
	return ;
}
int				Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int				Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int				Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int				Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void			Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << BYELLOW;
	std::cout << "accounts:" 	<< _nbAccounts;
	std::cout << ";total:" 		<< _totalAmount;
	std::cout << ";deposits:" 	<< _totalNbDeposits;
	std::cout << ";withdrawals:" 	<< _totalNbWithdrawals;
	std::cout << std::endl;
	std::cout << RESET;
}

void			Account::makeDeposit( int deposit )
{

	Account::_displayTimestamp();

	this->_totalNbDeposits++;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	std::cout << "index:" 		<< this->_accountIndex;
	std::cout << ";p_amount:" 	<< this->_amount - deposit;
	std::cout << ";deposit:" 	<< deposit;
	std::cout << ";amount:" 		<< this->_amount;
	std::cout << ";nb_deposits:" 	<< this->_nbDeposits;
	std::cout << std::endl;
}

bool			Account::makeWithdrawal( int withdrawal )
{

	Account::_displayTimestamp();

	if (this->_amount < withdrawal)
	{
		std::cout << BRED;
		std::cout << "index:" 			<< this->_accountIndex;
		std::cout << ";p_amount:" 		<< this->_amount;
		std::cout << ";withdrawal:refused" << std::endl;
		std::cout << RESET;
		return (false);
	}
	else
	{
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		this->_totalNbWithdrawals++;
	}
	std::cout << BCYAN;
	std::cout << "index:" 			<< this->_accountIndex;
	std::cout << ";p_amount:" 		<< this->_amount + withdrawal;
	std::cout << ";withdrawal:" 		<< withdrawal;
	std::cout << ";amount:" 			<< this->_amount;
	std::cout << ";nb_withdrawals:" 	<< this->_nbWithdrawals;
	std::cout << std::endl;
	std::cout << RESET;
	return (true);
}

int				Account::checkAmount( void ) const
{
	return (this->_amount);
}
void			Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << UGREEN;
	std::cout << "index:" 		<< this->_accountIndex;
	std::cout << ";amount:" 		<< this->_amount;
	std::cout << ";deposits:" 	<< this->_nbDeposits;
	std::cout << ";withdrawals:" 	<< this->_nbWithdrawals;
	std::cout << std::endl;
	std::cout << RESET;
}

void				Account::_displayTimestamp( void )
{
	time_t      t = time(NULL);
	struct tm   *aT = localtime(&t);
	char        s[32];

	std::cout << HPURPLE;
	strftime(s, sizeof(s), "[%Y%d%m_%H%M%S] ", aT);
	std::cout << s;
	std::cout << RESET;
}
