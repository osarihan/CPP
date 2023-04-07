/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: ScavTrap.cpp
  date: 2023-04-06T21:16:09.737Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name){
	std::cout << "ScavTrap constructor called" << std::endl;
	this->att_dmg = 20;
	this->hit_points = 100;
	this->en_points = 50;
	this->name = name;
}

ScavTrap::ScavTrap(const ScavTrap& obj){
	std::cout << "ScavTrap copy constructor called" << std::endl;	
	*this = obj;
}

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;	
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->name << " is now Gatekeeper mode!" << std::endl;
}

int	ScavTrap::getAd( void )
{
	return (this->att_dmg);
}

int	ScavTrap::getHp( void )
{
	return (this->hit_points);
}

int	ScavTrap::getEp( void )
{
	return (this->en_points);
}

std::string	ScavTrap::getName( void )
{
	return (this->name);
}
