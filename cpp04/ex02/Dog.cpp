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
  date: 2023-04-13T20:36:55.485Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Dog.hpp"

Dog::Dog( void )
{
	this->Animal::type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog &dog )
{
	this->Animal::type = dog.type;
	this->brain = new Brain(*dog.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=( const Dog &dog )
{
	if (this != &dog)
	{
		this->type = dog.type;
		this->brain = dog.brain;
	}
	return (*this);
}

Dog::~Dog()
{
	delete	this->brain;
	std::cout << "Dog default destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof Woof" << std::endl;
}