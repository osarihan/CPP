/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Dog.hpp
  date: 2023-04-11T01:46:44.573Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	~Dog();
	Dog( const Dog &dog );
	void makeSound() const;
	Dog	&operator=( const Dog &dog );
	std::string getType() const;
};

// class Dog: public Animal
// {
// public:
// 	Dog( void );
// 	Dog ( const Dog &dog );

	//Dog	&operator=( const Dog &dog );

// 	~Dog();

// 	void		makeSound( void ) const;
// };

#endif