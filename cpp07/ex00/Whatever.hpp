/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Whatever.hpp
  date: 2023-06-06T12:04:11.098Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T> 

void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>

T min(T &a, T &b)
{
	if (a == b)
		return (b);
	else if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>

T max(T &a, T &b)
{
	if (a == b)
		return (b);
	else if (a > b)
		return (a);
	else
		return (b);
}

#endif