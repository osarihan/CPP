/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:23:11 by osarihan          #+#    #+#             */
/*   Updated: 2023/03/03 18:25:06 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *make_upper(char *str)
{
	int i = 0;
	while (str[i] != '\0'){
		str[i] = toupper(str[i]);
		i++;
	}
	return(str);
}

int main(int ac, char **av)
{
	if (ac > 1){
		for (int i=1; av[i]; i++){
			std::cout << make_upper(av[i]);
			std::cout << " ";
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}