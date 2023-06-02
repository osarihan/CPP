/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: RobotomyRequestForm.hpp
  date: 2023-06-02T10:16:57.879Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
	const std::string	_target;
public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( RobotomyRequestForm &r );
	RobotomyRequestForm &operator=( RobotomyRequestForm &r );
	~RobotomyRequestForm();

	RobotomyRequestForm( std::string target );

	void	execute( Bureaucrat const &executor ) const;
};

#endif