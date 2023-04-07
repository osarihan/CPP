/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: FlagTrap.cpp
  date: 2023-04-07T00:17:12.666Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "FragTrap default constructor called" << std::endl;
	this->att_dmg = 0;
	this->hit_points = 0;
	this->en_points = 0;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;	
}

FragTrap::FragTrap(FragTrap& obj){
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

FragTrap::FragTrap(std::string name){
	std::cout << "FragTrap constructor called" << std::endl;
	this->att_dmg = 20;
	this->hit_points = 100;
	this->en_points = 50;
	this->name = name;
}

void FragTrap::highFivesGuys(){
	std::cout << "Lets High Five !!!!" << std::endl;	
}

int	FragTrap::getAd( void )
{
	return (this->att_dmg);
}

int	FragTrap::getHp( void )
{
	return (this->hit_points);
}

int	FragTrap::getEp( void )
{
	return (this->en_points);
}

std::string	FragTrap::getName( void )
{
	return (this->name);
}