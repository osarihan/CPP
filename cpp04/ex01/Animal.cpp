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
  date: 2023-04-13T20:34:41.692Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Animal.hpp"

Animal::Animal( void )
{
	this->Animal::type = "Animal";
	std::cout << "Animal default constructor called!" << std::endl;
}

Animal::Animal( const Animal &animal )
{
	this->type = animal.type;
	std::cout << "Animal copy constructor called!" << std::endl;
}

Animal	&Animal::operator=( const Animal &animal )
{
	if (this != &animal)
	{
		this->type = animal.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Default animal destructor called!" << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "(Animal sounds)" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}