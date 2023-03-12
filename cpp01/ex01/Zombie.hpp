/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: zombie.hpp
  date: 2023-03-09T20:44:31.088Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#include <string>

class Zombie{
private:
	std::string name;
public:
    Zombie* zombieHorde( int N, std::string name );
	Zombie(std::string name);
	~Zombie();
    void announce(Zombie *zombie1) {
        std::cout << zombie1->get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
    std::string get_name() {
        return name;
    }

    Zombie(void);
};

#endif