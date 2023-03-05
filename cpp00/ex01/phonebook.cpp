/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:53:36 by osarihan          #+#    #+#             */
/*   Updated: 2023/03/05 18:39:22 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void printContact(Contact c, int i) {
    std::cout << std::right << std::setw(10) << std::setfill(' ') << (i + 1);
    std::cout << "|";
    std::cout << std::right << std::setw(10) << std::setfill(' ') << (c.name.length() > 10 ? c.name.substr(0, 9) + "." : c.name);
    std::cout << "|";
    std::cout << std::right << std::setw(10) << std::setfill(' ') << (c.surname.length() > 10 ? c.surname.substr(0, 9) + "." : c.surname);
    std::cout << "|";
    std::cout << std::right << std::setw(10) << std::setfill(' ') << (c.nickname.length() > 10 ? c.nickname.substr(0, 9) + "." : c.nickname);
  	std::cout << "|";
    std::cout << std::endl;
    std::cout << std::setfill('-') << std::setw(44) << "" << std::endl;
}

int ft_add(std::string str, Contact *cnt, int i){
	std::cout << "first name:";
	getline(std::cin, str);
	if (str.empty())
		return(0);
	cnt[i].name = str;
	std::cout << std::endl;
	//
	std::cout << "surname:";
	getline(std::cin, str);
	if (str.empty())
		return(0);
	cnt[i].surname = str;
	std::cout << std::endl;	
	//
	std::cout << "nickname:";
	getline(std::cin, str);
	if (str.empty())
		return(0);
	cnt[i].nickname = str;
	std::cout << std::endl;
	//
	std::cout << "phone number:";
	getline(std::cin, str);
	if (str.empty())
		return(0);
	cnt[i].number = str;
	std::cout << std::endl;
	//
	std::cout << "darkest secret:";
	getline(std::cin, str);
	if (str.empty())
		return(0);
	cnt[i].secret = str;
	std::cout << std::endl;
	//
	return (1);
}

void	ft_clear(Contact *c, int i){
	c[i].name.erase();
	c[i].secret.erase();
	c[i].number.erase();
	c[i].secret.erase();
	c[i].surname.erase();
	return;
}

void	ft_print(Contact c){
	std::cout << c.name << std::endl;
	std::cout << c.surname << std::endl;
	std::cout << c.nickname << std::endl;
	std::cout << c.number << std::endl;
	std::cout << c.secret << std::endl;
	return;
}

int main(void){
	int	i = 0;
	PhoneBook book;
	std::string str;
	std::string search;
	int numbe;

	while (1){
		if (i == 8)
			i = 0;
		std::cout << "Please type your command" << std::endl;
		std::cout << "==>>";
		getline(std::cin, str);
		if (str == "ADD"){
			if (ft_add(str, book.list, i) == 1){
				std::cout << "creation successful!" << std::endl;
				i++;
			}
			else{
				std::cout << "fields cannot be empty!" << std::endl;
				ft_clear(book.list, i);
			}
		}
		else if (str == "SEARCH"){
			for (int i=0; i < 8; i++){
				printContact(book.list[i], i);
			}
			std::cout << "Please type the number of contact you're trying to search" << std::endl;
			getline(std::cin, search);
			numbe = atoi(search.c_str());
			if (numbe > 7 || numbe == 0)
				std::cout << "Error no such member!" << std::endl;	
			else
				ft_print(book.list[numbe - 1]);
		}
		else if (str == "EXIT"){
			for (int i=0; i < 8; i++){
				ft_clear(book.list, i);
			}
			exit(0);
		}
		else{
			std::cout << "invalid command please try again!" << std::endl;
		}
	}
}