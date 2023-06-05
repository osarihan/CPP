/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Base.cpp
  date: 2023-06-05T14:40:26.722Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base::~Base(void)
{
	std::cout << "Base destructor called" << std::endl;
	return ;
}

Base	*Base::generate(void)
{
	srand(time(0));
	int randomNbr = rand() % 3;
	if (randomNbr == 0)
		return (new A());
	else if (randomNbr == 1)
		return (new B());
	return (new C());
}

void	Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Le type de p est A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Le type de p est B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Le type de p est C" << std::endl;
	else
		std::cerr << "Le type de p est inconnu" << std::endl;
}

void	Base::identify(Base& p)
{
	identify(&p);
}