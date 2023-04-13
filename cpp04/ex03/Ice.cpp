/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Ice.cpp
  date: 2023-04-13T23:53:36.334Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Ice.hpp"

Ice::Ice( void )
{
	this->AMateria::_type = "ice";
}

Ice::Ice( const Ice &i )
{
	this->AMateria::_type = i._type;
}

Ice	&Ice::operator=( const Ice &i )
{
	if (this != &i)
	{
		this->_type = i._type;
	}
	return (*this);
}

AMateria	*Ice::clone( void ) const
{
	return (new Ice( *this ));
}

void	Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
}