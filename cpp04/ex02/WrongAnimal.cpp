/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: WrongAnimal.cpp
  date: 2023-04-13T20:37:07.153Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &wronganimal)
{
	this->type = wronganimal.type;
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &wronganimal )
{
	if (this != &wronganimal)
	{
		this->type = wronganimal.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout <<"(WrongAnimal sounds)" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}