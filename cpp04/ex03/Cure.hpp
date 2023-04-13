/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Cure.hpp
  date: 2023-04-13T23:53:33.248Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef	CURE_HPP
# define	CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure( void );
	Cure( const Cure &c );

	Cure	&operator=( const Cure &c );

	AMateria	*clone( void ) const;
	void		use( ICharacter &target );

	~Cure();
};

#endif