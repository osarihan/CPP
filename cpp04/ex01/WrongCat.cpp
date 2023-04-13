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
  date: 2023-04-13T20:35:37.119Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->type = "wrongcat";
	std::cout << "WrongCat default constructor called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat &wrongcat )
{
	this->type = wrongcat.type;
	std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &wrongcat )
{
	if (this != &wrongcat)
	{
		this->type = wrongcat.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}