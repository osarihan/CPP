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
  date: 2023-04-11T01:44:00.157Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(){
	this->type = "cat";
	std::cout << "Cat class def constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat class def destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Cat says: MEOW!" << std::endl;	
}

std::string	Cat::getType() const{
	return (this->type);
}

Cat::Cat( const Cat &cat )
{
	this->Animal::type = cat.type;
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat	&Cat::operator=( const Cat &cat )
{
	if (this != &cat)
	{
		this->type = cat.type;
	}
	return (*this);
}