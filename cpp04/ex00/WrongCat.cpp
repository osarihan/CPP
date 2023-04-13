/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: WrongCat.cpp
  date: 2023-04-13T19:42:53.933Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->type = "wrongcat";
	std::cout << "WrongCat class default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat class destructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &wrongcat )
{
	this->type = wrongcat.type;
	std::cout << "WrongCat class copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &wrongcat )
{
	std::cout << "WrongCat class copy assigment operator called" << std::endl;
	if (this != &wrongcat)
	{
		this->type = wrongcat.type;
	}
	return (*this);
}
