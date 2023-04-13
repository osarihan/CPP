/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: ICharacter.hpp
  date: 2023-04-13T23:53:42.743Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef	ICHARACTER_HPP
# define ICHARACTER_HPP

# include "iostream"
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}

	virtual	std::string	const	&getName( void ) = 0;
	virtual	void				equip( AMateria	*m ) = 0;
	virtual	void				unequip( int	idx ) = 0;
	virtual	void				use( int idx, ICharacter	&target ) = 0;

};

#endif