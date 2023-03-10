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
  date: 2023-03-09T18:43:47.115Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string name);
	~Zombie();
    void announce(Zombie *zombie1) {
        std::cout << zombie1->get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
    std::string get_name() {
        return name;
    }
};

#endif