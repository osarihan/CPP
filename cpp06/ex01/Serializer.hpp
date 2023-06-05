/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Serializer.hpp
  date: 2023-06-05T14:40:01.566Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef	SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <iostream>


class Serializer{
private:

public:
	/*ortadox*/
	Serializer();
	~Serializer();
	// Serializer(const Serializer &obj);

	/*subject*/
	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};

#endif