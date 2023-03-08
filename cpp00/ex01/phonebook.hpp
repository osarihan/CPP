/*****************************************************************************/
/*    )                    )   (              (    (        )             )  */
/* ( /(  (              ( /(   )\ )    (      )\ ) )\ )  ( /(   (      ( /(  */
/* )\()) )\ )       (   )\()) (()/(    )\    (()/((()/(  )\())  )\     )\()) */
/*((_)\ (()/(       )\ ((_)\   /(_))((((_)(   /(_))/(_))((_)\((((_)(  ((_)\  */
/*  ((_) /(_))_  _ ((_) _((_) (_))   )\ _ )\ (_)) (_))   _((_))\ _ )\  _((_) */
/* / _ \(_)) __|| | | ||_  /  / __|  (_)_\(_)| _ \|_ _| | || |(_)_\(_)| \| | */
/*| (_) | | (_ || |_| | / /   \__ \   / _ \  |   / | |  | __ | / _ \  | .` | */
/* \___/   \___| \___/ /___|  |___/  /_/ \_\ |_|_\|___| |_||_|/_/ \_\ |_|\_| */
/*                                                                           */
/* file: phonebook.hpp                                                       */
/* date: 06.03.2023                                                          */
/* mail: osarihan@student.42kocaeli.com.tr					                 */
/*****************************************************************************/

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact{
public:
	std::string name;
	std::string surname;
	std::string nickname;
	std::string secret;
	std::string number;
};

class PhoneBook{
public:
	Contact list[8];
	int i;
		
};

void 	printContact(Contact c, int i);
int 	ft_add(std::string str, Contact *cnt, int i);
void	ft_clear(Contact *c, int i);
void	ft_print(Contact c);

#endif