/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: RobotomyRequestForm.cpp
  date: 2023-06-02T10:16:55.055Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("RobotomyRequest", 72, 45), _target("Undefined")
{
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm &r ): AForm(r.getName(), r.getGradeS(), r.getGradeE()), _target(r._target)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm &r )
{
	(void) r;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): AForm("RobotomyRequest", 72, 45), _target(target)
{
}

void	RobotomyRequestForm::execute( const Bureaucrat &executor ) const
{
	this->AForm::checkExec(executor);
	std::cout << "* DRILLING NOISES *" << std::endl;
	std::cout << "* DRILLING NOISES *" << std::endl;
	std::cout << "* DRILLING NOISES *" << std::endl;
	int	random = rand() % 2;
	if (random == 0)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " has failed to be robotomized." << std::endl;
}