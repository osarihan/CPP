/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: RPN.hpp
  date: 2023-06-13T08:42:38.073Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <stdbool.h>
#include <stdlib.h>
#include <cctype> //isdigit

class RPN
{
private:
	/* data */
public:
	/*ORTADOX*/
	RPN(/* args */);
	~RPN();
	RPN(const RPN &obj);
	RPN &operator=(const RPN &obj);

	/*SUBJECT*/
	char token[4];
	int first;
	int second;
	int _token;
	int _pushed;
	void	checkArg(char *arg);
	bool	isToken(char c);
	int		calculator(int first, int second, int op);
	std::stack<int> sTok;
	std::stack<int> nTok;
	std::stack<int> st;	
};

#endif