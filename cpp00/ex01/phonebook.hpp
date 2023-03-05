/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:55:01 by osarihan          #+#    #+#             */
/*   Updated: 2023/03/05 17:59:17 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip> 
#include <unistd.h>

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
void	ft_print(Contact c, int i);

#endif