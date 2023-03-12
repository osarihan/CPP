/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: main.cpp
  date: 2023-03-12T13:05:48.805Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include <iostream>

int main(void){
	std::string asd = "HI THIS IS BRAIN";
	std::string *stringptr = &asd;
	std::string &stringREF = asd;

	// memory addresses
	std::cout << &asd << std::endl;
	std::cout << stringptr << std::endl;
	std::cout << &stringREF << std::endl;

	// Values
	std::cout << asd << std::endl;
	std::cout << *stringptr << std::endl;
	std::cout << stringREF << std::endl;
	
	return (0);
}