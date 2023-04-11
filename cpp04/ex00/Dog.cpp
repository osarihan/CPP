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
  date: 2023-04-11T01:47:15.142Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(){
	this->type = "dog";
	std::cout << "Dog class def constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog class def destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Dog says: BARK!" << std::endl;	
}

Dog::Dog( const Dog &dog )
{
	this->Animal::type = dog.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

std::string	Dog::getType() const{
	return (this->type);
}

Dog &Dog::operator=( const Dog &dog )
{
	if (this != &dog)
	{
		this->type = dog.type;
	}
	return (*this);
}