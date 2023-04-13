/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Character.hpp
  date: 2023-04-13T23:53:27.394Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public	ICharacter
{
private:
	AMateria	*_inventory[4];
	std::string	_name;
public:
	Character( void );
	Character( const std::string name );
	Character( const Character &c );

	Character	&operator=( const Character &c );

	std::string	const	&getName( void );
	void				equip( AMateria	*m );
	void				unequip( int	idx );
	void				use( int idx, ICharacter	&target );
	
	virtual	~Character();
};


#endif