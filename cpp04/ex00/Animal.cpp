/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Animal.cpp
  date: 2023-04-13T19:42:18.403Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Animal.hpp"

Animal::Animal( void )
{
	this->Animal::type = "Animal";
	std::cout << "Animal class default constructor called!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal class destructor called!" << std::endl;
}

Animal::Animal( const Animal &animal )
{
	this->type = animal.type;
	std::cout << "Animal class copy constructor called!" << std::endl;
}

Animal	&Animal::operator=( const Animal &animal )
{
	std::cout << "Animal class copy assigment operator called!" << std::endl;
	if (this != &animal)
	{
		this->type = animal.type;
	}
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << "(Animal sounds)" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}