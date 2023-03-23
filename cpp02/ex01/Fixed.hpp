#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
private:
	int fixed_point;
	int frac_bits = 8;
public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float number);
	~Fixed();
	float toFloat( void ) const;
	int toInt( void ) const;

};

Fixed& operator<<(const Fixed& obj);

#endif