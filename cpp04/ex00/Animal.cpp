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
  date: 2023-04-11T01:40:27.074Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Animal.hpp"

Animal::Animal(){
	this->type = "Animal";
	std::cout << "Animal class def constructor" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal class def destructor" << std::endl;
}

std::string Animal::getType() const{
	return (this->type);
}

void Animal::makeSound() const{
	std::cout << "normal animal" << std::endl;	
}