/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: RPN.CPP
  date: 2023-06-13T08:42:35.723Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "RPN.hpp"

RPN::RPN()
{
	first = 0;
	second = 0;
	token[0] = '+';
	token[1] = '-';
	token[2] = '/';
	token[3] = '*';
}

RPN::~RPN()
{
	while (!st.empty())
		st.pop();
}

RPN::RPN(const RPN &obj){*this = obj;}

RPN &RPN::operator=(const RPN &obj)
{
	(void)obj;
	this->first = 0;
	this->second = 0;
	this->token[0] = '+';
	this->token[1] = '-';
	this->token[2] = '/';
	this->token[3] = '*';
	return *this;
}

bool	RPN::isToken(char c)
{
	for (int j = 0; j <= 3; j++)
	{
		if (c == this->token[j])
			return (true);
	}
	return (false);
}

int		RPN::calculator(int first, int second, int op)
{
	if (op == '+')
		return (first + second);
	else if (op == '-')
		return (second - first);
	else if (op == '/')
	{
		if (first == 0)
		{
			std::cout << "Error(divide by 0)!" << std::endl;
			exit(1);
		}
		return (second / first);
	}
	else
		return (second * first);
}

void RPN::checkArg(char *arg)
{
	int i = 0;
	_token = 0;
	while (arg[i])
	{
		if (isToken(arg[i]))
		{
			_token = 1;
			if (st.size() < 2)
			{
				std::cout << "Error" << std::endl;
				exit(1);
			}
			first = st.top();
			st.pop();
			second = st.top();
			st.pop();
			st.push(calculator(first, second, arg[i]));
		}
		else if (isdigit(arg[i]))
			st.push(arg[i] - 48);
		else if (arg[i] != 32)
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		i++;
	}
	if (_token == 1)
		std::cout << st.top() << std::endl;
	else
		std::cerr << "NO TOKEN!" << std::endl;
}
