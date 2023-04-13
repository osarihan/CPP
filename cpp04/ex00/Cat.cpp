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
  date: 2023-04-13T19:42:27.617Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Cat.hpp"

Cat::Cat( void )
{
	this->Animal::type = "Cat";
	std::cout << "Cat class default constructor called!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat class default destructor called!" << std::endl;
}

Cat::Cat( const Cat &cat )
{
	this->Animal::type = cat.type;
	std::cout << "Cat class copy constructor called!" << std::endl;
}

Cat	&Cat::operator=( const Cat &cat )
{
	std::cout << "Cat class copy assigment operator called!" << std::endl;
	if (this != &cat)
	{
		this->type = cat.type;
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}