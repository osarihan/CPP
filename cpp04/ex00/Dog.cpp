/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Dog.cpp
  date: 2023-04-13T19:42:34.889Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Dog.hpp"

Dog::Dog( void )
{
	this->Animal::type = "Dog";
	std::cout << "Dog class default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog( const Dog &dog )
{
	this->Animal::type = dog.type;
	std::cout << "Dog class copy constructor called" << std::endl;
}

Dog &Dog::operator=( const Dog &dog )
{
	std::cout << "Dog class copy assigment operator called" << std::endl;
	if (this != &dog)
	{
		this->type = dog.type;
	}
	return (*this);
}


void	Dog::makeSound( void ) const
{
	std::cout << "Bark!" << std::endl;
}