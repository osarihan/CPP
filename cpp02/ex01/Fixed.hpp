#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
private:
	
public:
	Fixed(void);
	Fixed(const int value);
	~Fixed();
	float toFloat( void ) const;
	function int toInt( void ) const;
};

Fixed& operator<<(const Fixed& obj);

#endif