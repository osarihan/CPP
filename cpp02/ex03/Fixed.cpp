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
  date: 2023-03-15T14:57:08.345Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

////////////////////////////FIXED CLASS FUNCTIONS/////////////////////

#include "Fixed.hpp"

//new funcs
Fixed	Fixed::min( const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (Fixed( fixed2 ));
	return (Fixed( fixed1 ));
}

Fixed	Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (Fixed( fixed2 ));
	return (Fixed( fixed1 ));
}

Fixed	Fixed::max( const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (Fixed( fixed1 ));
	return (Fixed( fixed2 ));
}

Fixed	Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (Fixed( fixed1 ));
	return (Fixed( fixed2 ));
}

//
Fixed::Fixed(void){
    this->fixed_point = 0;
}

Fixed::Fixed(const int value){
    this->fixed_point = (value << 8);	
}

Fixed::~Fixed(){
    //std::cout << "DEST" << std::endl;
}

Fixed::Fixed(const float number){
    this->fixed_point = (int)roundf(number * (1 << frac_bits));
}

std::ostream  &operator<<(std::ostream &out, const Fixed& obj){
    out << obj.toFloat();
    return (out);
}

float Fixed::toFloat(void) const{
    return((float)this->fixed_point / (256));
}

//
int Fixed::toInt(void) const{
    return ((int)roundf((float)this->fixed_point / (256)));
}

int Fixed::getRawBits() const{
	std::cout << "member funtion called" << std::endl;
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw){
	this->fixed_point = raw;
}

//new operators

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	this->fixed_point = fixed.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+( const Fixed &fixed1 ) const
{
	return (Fixed(fixed1.toFloat() + this->toFloat()));
}

Fixed	Fixed::operator-( const Fixed &fixed1 ) const
{
	return (Fixed(fixed1.toFloat() - this->toFloat()));
}

Fixed	Fixed::operator*( const Fixed &fixed1 ) const
{
	return (Fixed(fixed1.toFloat() * this->toFloat()));
}

Fixed	Fixed::operator/( const Fixed &fixed1 ) const
{
	return (Fixed(fixed1.toFloat() / this->toFloat()));
}

bool	Fixed::operator>( const Fixed &fixed1 ) const
{
	return (this->toFloat() > fixed1.toFloat());
}
bool	Fixed::operator<( const Fixed &fixed1 ) const
{
	return (this->toFloat() < fixed1.toFloat());
}
bool	Fixed::operator>=( const Fixed &fixed1 ) const
{
	return (this->toFloat() >= fixed1.toFloat());
}

bool	Fixed::operator<=( const Fixed &fixed1 ) const
{
	return (this->toFloat() <= fixed1.toFloat());
}

bool	Fixed::operator==( const Fixed &fixed1 ) const
{
	return (this->toFloat() == fixed1.toFloat());
}

bool	Fixed::operator!=( const Fixed &fixed1 ) const
{
	return (this->toFloat() != fixed1.toFloat());
}

Fixed	&Fixed::operator++( void )
{
	(this->fixed_point)++;
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	(this->fixed_point)--;
	return (*this);
}

Fixed	Fixed::operator++( int n )
{
	Fixed	aux = *this;
	if (n < 0)
	{
		while (n <= 0)
		{
			--*this;
			n++;
		}
	}
	else
	{
		while (n >= 0)
		{
			++*this;
			n--;
		}
	}
	return (aux);
}

Fixed	Fixed::operator--( int n )
{
	Fixed	aux = *this;
	if (n < 0)
	{
		while (n <= 0)
		{
			++*this;
			n++;
		}
	}
	else
	{
		while (n >= 0)
		{
			--*this;
			n--;
		}
	}
	return (aux);
}
//////////////////////END OF FIXED CLASS FUNCS///////////////////////////