/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: easyfind.hpp
  date: 2023-06-07T12:28:39.824Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>

void easyfind(T &container, int value){
    std::vector<int>::iterator it = find(container.begin(), container.end(), value);
    if (*it == value){
        std::cout << "bulunan deger " << std::distance(container.begin(), it) << std::endl;
        return;
    }
    throw std::runtime_error("value not found");
}

#endif
