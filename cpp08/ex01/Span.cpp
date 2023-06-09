/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Span.cpp
  date: 2023-06-09T09:43:06.946Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Span.hpp"

Span::Span(){
	std::cout << "def const called" << std::endl;
}

Span::~Span(){
	std::cout << "dest called" << std::endl;
}

Span::Span(unsigned int N) : _N(N){}

void Span::addNumber(int number){
	if (_numbers.size() == _N){
		throw std::runtime_error("Span is already full!");
	}
	_numbers.push_back(number);
}

int Span::shortestSpan(){
	if (_numbers.size() < 2)
		throw std::runtime_error("Cannot find span with less than 2 _numbers");
	std::sort(_numbers.begin(), _numbers.end());
	int shortest = _numbers[_numbers.size() - 1] - _numbers[0];
	for (unsigned int i = 1; i < _numbers.size(); ++i){
		int span = _numbers[i] - _numbers[i - 1];
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}

int Span::longestSpan(){
	if (_numbers.size() < 2)
        throw std::runtime_error("Cannot find span with less than 2 _numbers");
	std::sort(_numbers.begin(), _numbers.end());
	return (_numbers[_numbers.size() - 1] - _numbers[0]);
}

template<typename T>
void Span::addNumbers(int val){
	int i = 0;
	int rnd = 0;
	while (i < val){
		rnd = rand();
		i++;
	}
}