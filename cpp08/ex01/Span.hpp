/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: span.hpp
  date: 2023-06-09T10:06:12.803Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

class Span{
private:
	unsigned int _N;
	std::vector<int> _numbers;
public:
	Span();
	~Span();
	Span(unsigned int N);
	void addNumber(int number);
    void addNumber(void);
	int shortestSpan();
	int longestSpan();
};

#endif