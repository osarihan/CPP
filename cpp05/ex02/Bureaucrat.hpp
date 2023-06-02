/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Bureaucrat.hpp
  date: 2023-06-02T10:16:24.864Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

# include "AForm.hpp"

class	AForm;

class Bureaucrat
{
private:
	std::string	const	_name;
	int					_grade;
	int	static const	_minGrade = 150;
	int	static const	_maxGrade = 1;
public:
	/* Orthodoxal Canonical needs */
	Bureaucrat( void );
	Bureaucrat( const Bureaucrat &b );

	Bureaucrat	&operator=( const Bureaucrat &b );

	~Bureaucrat();

	/* Exercice needs */
	Bureaucrat( std::string name, int grade );

	class GradeTooHigh : public std::exception
	{
		public:
			const char	*what( void ) const throw();
	};
	
	class GradeTooLow : public	std::exception
	{
		public:
			const char	*what( void ) const throw();
	};

	const std::string	getName( void ) const;
	int					getGrade( void ) const;
	void				upGrade( void );
	void				downGrade( void );

	void				signForm( AForm &form ) const;
	void				executeForm(AForm &form ) const;
};

std::ostream	&operator<<( std::ostream &o, const Bureaucrat &b );

#endif