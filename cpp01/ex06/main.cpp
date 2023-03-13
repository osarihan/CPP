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
  date: 2023-03-12T15:07:15.708Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Harl.hpp"

int decide(std::string std){
	if (std == "DEBUG")
		return(1);
	else if (std == "INFO")
		return(2);
	else if (std == "WARNING")
		return(3);
	else if (std == "ERROR")
		return(4);
	else
		return(0);
}

int main(int ac, char **av){
	Harl harl;
	(void)ac;
	if (av[1] == NULL)
		return(0);
	std::string asd = av[1];
	harl.complain(asd);
	return(0);

}


// int main() {
//     Harl harl;

//     harl.complain("DEBUG");   // [DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!
//     harl.complain("INFO");    // [INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!
//     harl.complain("WARNING"); // [WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.
//     harl.complain("ERROR");   // [ERROR] This is unacceptable! I want to speak to the manager now.
//     harl.complain("FOO");     // [UNKNOWN] I don't know how to complain at the "FOO" level.

//     return 0;
// }