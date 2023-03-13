/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Harl.hpp
  date: 2023-03-12T15:07:11.584Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

int decide(std::string std);

class Harl {
private:
    void debug(void) {
        std::cout << "[DEBUG] " << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    }

    void info(void) {
        std::cout << "[INFO] " << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    }

    void warning(void) {
        std::cout << "[WARNING] " << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    }

    void error(void) {
        std::cout << "[ERROR] " << "This is unacceptable! I want to speak to the manager now." << std::endl;
    }

public:
    void complain(std::string level) {
        void (Harl::*pfn)(void) = nullptr;
       // if (level == "DEBUG") {
       //     pfn = &Harl::debug;
       // }
       //  else if (level == "INFO") {
       //     pfn = &Harl::info;
       // }
       //  else if (level == "WARNING") {
       //     pfn = &Harl::warning;
       // }
       //  else if (level == "ERROR") {
       //     pfn = &Harl::error;
       // } 
       // else {
       //     std::cout << "[UNKNOWN] " << "I don't know how to complain at the \"" << level << "\" level." << std::endl;
       //     return;
       // }
		switch(decide(level)){
			case 1:
                pfn = &Harl::debug;
                (this->*pfn)();
			case 2:
                pfn = &Harl::info;
                (this->*pfn)();
			case 3:
                pfn = &Harl::warning;
                (this->*pfn)();
			case 4:
                pfn = &Harl::error;
                (this->*pfn)();
                break;
            case 5:
               std::cout << "[UNKNOWN] " << "I don't know how to complain at the " << level << " level." << std::endl;
               return;
		}
    }
    Harl(){};
    ~Harl(){};
};

#endif