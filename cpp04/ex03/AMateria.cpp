/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: AMateria.cpp
  date: 2023-04-13T20:55:00.295Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "AMateria.hpp"

AMateria::AMateria( void ): _type("undefined")
{
}

AMateria::AMateria( std::string	&type ): _type(type)
{
}

AMateria::AMateria( const AMateria &a ): _type(a._type)
{
}

AMateria::~AMateria()
{
}

AMateria	&AMateria::operator=( const AMateria &a )
{
	if (this != &a)
		this->_type = a._type;
	return (*this);
}

std::string const	&AMateria::getType( void ) const
{
	return (this->_type);
}

void	AMateria::use( ICharacter &target)
{
	(void) target;
}