/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Cat.cpp
  date: 2023-04-13T20:36:42.277Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Cat.hpp"

Cat::Cat( void )
{
	this->Animal::type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called!" << std::endl;
}

Cat::Cat( const Cat &cat )
{
	this->Animal::type = cat.type;
	this->brain = new Brain(*cat.brain);
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat	&Cat::operator=( const Cat &cat )
{
	if (this != &cat)
	{
		this->type = cat.type;
		this->brain = cat.brain;
	}
	return (*this);
}

Cat::~Cat()
{
	delete	this->brain;
	std::cout << "Cat default destructor called!" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miau Miau" << std::endl;
}