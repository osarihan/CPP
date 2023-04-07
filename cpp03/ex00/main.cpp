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
  date: 2023-04-06T19:24:31.048Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap john("John Doe");
	ClapTrap chuck("Chuck Norris");
	ClapTrap foreign;
	foreign = chuck;

	john.attack("Chuck Norris");
	chuck.takeDamage(0);
	chuck.takeDamage(132);
	chuck.attack("Me");
	chuck.beRepaired(2);
	chuck.takeDamage(10);
	foreign.attack("John Doe");
	return 0;
}