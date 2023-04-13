/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: MateriaSource.hpp
  date: 2023-04-13T23:54:07.573Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef	MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public	IMateriaSource
{
private:
	AMateria	*_inventory[4];
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource &m );

	MateriaSource	&operator=( const MateriaSource &m );

	void		learnMateria(AMateria*);
	AMateria*	createMateria( std::string const &type);

	~MateriaSource();
};

#endif