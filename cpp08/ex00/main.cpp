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
  date: 2023-06-07T12:28:42.280Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "easyfind.hpp"

int main() {
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    try {
        easyfind(numbers, 40);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // try {
    //     std::vector<int>::iterator result = easyfind(numbers, 60);
    //     if (result != numbers.end()) {
    //         std::cout << "Value found at index: " << std::distance(numbers.begin(), result) << std::endl;
    //     } else {
    //         std::cout << "Value not found" << std::endl;
    //     }
    // } catch (const std::exception& e) {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    return 0;
}