/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Bureaucrat.cpp
  date: 2023-06-02T10:15:19.380Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Bureaucrat.hpp"

const char	*Bureaucrat::GradeTooHigh::what( void ) const throw()
{
	return ("Exception: Grade too high!");
}

const char	*Bureaucrat::GradeTooLow::what( void ) const throw()
{
	return ("Exception: Grade too low!");
}

const std::string	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int		Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void	Bureaucrat::downGrade( void )
{
	if (this->_grade + 1 > this->_maxGrade)
		throw (GradeTooLow());
	this->_grade++;
}

void	Bureaucrat::upGrade( void )
{
	if (this->_grade - 1 < this->_minGrade)
		throw (GradeTooHigh());
	this->_grade--;
}

Bureaucrat::Bureaucrat( void ): _name("Undefined"), _grade(1)
{
}

Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name)
{
	if (grade < this->_maxGrade)
		throw (GradeTooHigh());
	if (grade > this->_minGrade)
		throw(GradeTooLow());
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat &b ): _name(b._name), _grade(b._grade)
{
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &b )
{
	if (this != &b)
	{
		this->_grade = b._grade;
		return (*this);
	}
	return (*this);
}

std::ostream	&operator<<( std::ostream &o, const Bureaucrat &b )
{
	o << "---------------- Bureaucrat: " << b.getName() << " ----------------" << std::endl;
	o << "Grade: " << b.getGrade() << std::endl;
	o << "------------------------------------------------" << std::endl;
	return (o);
}

Bureaucrat::~Bureaucrat()
{
}