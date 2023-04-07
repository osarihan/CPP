/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: ClapTrap.cpp
  date: 2023-04-06T19:24:26.501Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap default constructor called" << std::endl;
    this->hit_points = 10;
    this->en_points = 10;
    this->att_dmg = 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "ClapTrap constructor called" << std::endl;
    this->name = name;
    this->hit_points = 10;
    this->en_points = 10;
    this->att_dmg = 0;
}


ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& obj){
	std::cout << "ClapTrap copy const called" << std::endl;
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src){
    this->att_dmg = src.att_dmg;
    this->en_points = src.en_points;
    this->name = src.name;
    this->hit_points = src.hit_points;
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if (this->hit_points > 0 && this->en_points > 0){
        std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " \
            << this->att_dmg << " point of damage" << std::endl;
        this->en_points -= 1;
    }
    else
        std::cout << "ClapTrap cant do that action!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->hit_points > 0){
        std::cout << "ClapTrap " << this->name << " Take damage of " << amount << std::endl;  
        this->hit_points -= amount;
    }
    else{
        std::cout << "ClapTrap already dead" << std::endl; 
        return;
    }
    if (this->hit_points < 0){
        std::cout << "ClapTrap died" << std::endl;
    }
    else{
        std::cout << "ClapTrap has " << this->hit_points << " hit points left" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->hit_points > 0 && this->en_points > 0){
        std::cout << "ClapTrap " << this->name << " repair himself total number of " << amount << std::endl;
        this->hit_points += amount;
        this->en_points -= 1;
    }
    else
        std::cout << "ClapTrap cant do that action!" << std::endl;
}