#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
private:
	static const int frac_bits = 8;
	int fixed_point;
public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float number);
	~Fixed();
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;	
	void setRawBits( int const raw );
	//operators
	Fixed	&operator=( const Fixed &fixed );
	Fixed	operator+( const Fixed &fixed1 ) const;
	Fixed	operator-( const Fixed &fixed1 ) const; 
	Fixed	operator*( const Fixed &fixed1 ) const;
	Fixed	operator/( const Fixed &fixed1 ) const;
	Fixed	&operator++( void );
	Fixed	&operator--( void );
	Fixed	operator++( int n ); // For postincrement
	Fixed	operator--( int n ); // For postdecrement
	//bool op
	bool	operator>( const Fixed &fixed1 ) const;
	bool	operator<( const Fixed &fixed1 ) const;
	bool	operator>=( const Fixed &fixed1 ) const;
	bool	operator<=( const Fixed &fixed1 ) const;
	bool	operator==( const Fixed &fixed1 ) const;
	bool	operator!=( const Fixed &fixed1 ) const;
	//new funcs
	static Fixed	min( Fixed &fixed1, Fixed &fixed2);
	static Fixed	min( const Fixed &fixed1, const Fixed &fixed2);

	static Fixed	max( Fixed &fixed1, Fixed &fixed2);
	static Fixed	max( const Fixed &fixed1, const Fixed &fixed2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif