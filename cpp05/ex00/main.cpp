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
  date: 2023-06-02T10:15:33.033Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat a;
	std::cout << "Created " << a << std::endl;
	Bureaucrat b("b", 150);
	std::cout << "Created " << b << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat	toolow("low", 151);
	}
	catch (std::exception &e)
	{
		std::cout << "Created with too low grade:" << std::endl;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	toohigh("high", 0);
	}
	catch(std::exception &e)
	{
		std::cout << "Created with too high grade:" << std::endl;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		a.upGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << a << " moved to a too high grade:" << std::endl;
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		b.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << b << " moved to a too low grade:" << std::endl;
		std::cout << e.what() << std::endl;
	}
}