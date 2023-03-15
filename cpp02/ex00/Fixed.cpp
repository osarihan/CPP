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
	this->fixed_point = 0;
}

//Default Destrutor
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;;
}

//Copy Constructor
Fixed::Fixed(const Fixed &obj) {
	this->fixed_point = obj.fixed_point;
}

//Operator
Fixed& Fixed::operator=(const Fixed& other) {
    fixed_point = other.fixed_point;
    return *this;
}

int Fixed::getRawBits() const{
	std::cout << "member funtion called" << std::endl;
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw){
	this->fixed_point = raw;
}


// TEST MAIN
// int main( void ) {
//   	Fixed a;
//   	Fixed b( a );
//   	Fixed c;
// 	c = b;
// 	std::cout << a.getRawBits() << std::endl; std::cout << b.getRawBits() << std::endl; std::cout << c.getRawBits() << std::endl;
// 	return 0; 
// }