/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Fixed.cpp
  date: 2023-03-15T11:58:50.489Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Fixed.hpp"

//Default Constructor
Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

//Default Destrutor
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

//Copy Constructor
Fixed::Fixed(const Fixed &obj) {
	std::cout << "copy constructor called" << std::endl;
	*this = obj;
}

//Operator
Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
    fixed_point = other.getRawBits();
    return *this;
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member funtion called" << std::endl;
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member funtion called" << std::endl;
	this->fixed_point = raw;
}
