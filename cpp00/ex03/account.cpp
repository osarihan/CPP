#include "account.hpp"

Account::Account(int initial_deposit){
	
}

int Account::getNbAccounts(void){
	return (Account::_nbAccounts);
}

int Account::getNbDeposits(void){
	return (Account::_totalNbDeposits);
}

int Account::getTotalAmount(void){
	return (Account::_totalAmount);
}

int Account::getNbWithdrawals(void){
	return(Account::_totalNbWithdrawals);
}