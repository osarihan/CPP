/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:55:01 by osarihan          #+#    #+#             */
/*   Updated: 2023/03/04 14:06:35 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

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
		contact list[8];
		int i;
		
};

#endif