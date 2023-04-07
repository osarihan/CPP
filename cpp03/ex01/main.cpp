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

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap a;
	ScavTrap b("Alfonso");
	ScavTrap c(b);
	ScavTrap d("Yo");

	a = d;

	std::cout << "Hp: " << a.getHp() << " Ep: " << a.getEp() << " Ad: " << a.getAd() << " Name: " << a.getName() << std::endl;
	std::cout << "Hp: " << b.getHp() << " Ep: " << b.getEp() << " Ad: " << b.getAd() << " Name: " << b.getName() << std::endl;
	std::cout << "Hp: " << c.getHp() << " Ep: " << c.getEp() << " Ad: " << c.getAd() << " Name: " << c.getName() << std::endl;
	std::cout << "Hp: " << d.getHp() << " Ep: " << d.getEp() << " Ad: " << d.getAd() << " Name: " << d.getName() << std::endl;
	//std::cout << b.name << std::endl;
	return 0;
}