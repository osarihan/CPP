/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: ShrubberyCreationForm.cpp
  date: 2023-06-02T10:17:02.743Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm("ShrubberyCreation", 145, 13), _target("Undefined")
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &s ): AForm(s.getName() , s.getGradeS(), s.getGradeE()), _target(s._target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &s)
{
	(void) s;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): AForm("ShrubberyCreation", 145, 13), _target(target)
{
}

void	ShrubberyCreationForm::execute( const Bureaucrat &executor ) const
{
	this->AForm::checkExec(executor);
	std::fstream	fileout;

	fileout.open((this->_target + "_shrubbery").c_str(), std::ios::out);
	if (!fileout)
		throw(FileNotOpen());
	fileout << "      *           *           *           *" << std::endl;
	fileout << "     ***         ***         ***         ***" << std::endl;
	fileout << "    *****       *****       *****       *****" << std::endl;
	fileout << "   *******     *******     *******     *******" << std::endl;
	fileout << "  *********   *********   *********   *********" << std::endl;
	fileout << " *********** *********** *********** ***********" << std::endl;
	fileout << "    |            |            |            |" << std::endl;

	fileout.close();
}