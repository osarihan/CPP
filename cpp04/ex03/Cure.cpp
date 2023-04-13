/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Cure.cpp
  date: 2023-04-13T23:53:29.991Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Cure.hpp"

Cure::Cure( void )
{
	this->AMateria::_type = "cure";
}

Cure::Cure( const Cure &c )
{
	this->AMateria::_type = c._type;
}

Cure	&Cure::operator=( const Cure &c )
{
	if (this != &c)
	{
		this->_type = c._type;
	}
	return (*this);
}

AMateria	*Cure::clone( void ) const
{
	return (new Cure( *this ));
}

void	Cure::use( ICharacter &target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
}