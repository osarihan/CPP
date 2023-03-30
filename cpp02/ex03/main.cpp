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
  date: 2023-03-15T14:57:26.026Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Fixed.hpp"
#include <iostream>
#include "Point.hpp"

int main(void){
    Point p1(0.0f, 0.0f);
    Point p2(3.0f, 0.0f);
    Point p3(1.5f, 2.5f);
    Point p4(1.0f, 1.0f);

    bool is_inside = bsp(p1, p2, p3, p4);

    if (is_inside) {
        std::cout <<  " is inside the triangle." << std::endl;
    } else {
        std::cout << " is outside the triangle." << std::endl;
    }   
}