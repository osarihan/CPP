/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: AForm.hpp
  date: 2023-06-02T10:17:11.991Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef	AFORM_HPP
# define AFORM_HPP

# include	"Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_sign;
	const int			_gradeSign;
	const int			_gradeExec;
public:
	/* Orthodoxal Canonical needs */
	AForm( void );
	AForm( const AForm &f );

	AForm	&operator=( const AForm &f );

	virtual ~AForm();

	/* Exercice needs */

	AForm( std::string name, int gradeSing, int gradeExec);

	class GradeTooHigh : public std::exception
	{
		public:
			const char	*what( void ) const throw();
	};
	
	class GradeTooLow : public std::exception
	{
		public:
			const char	*what( void ) const throw();
	};

	class FormNotSigned : public std::exception
	{
		public:
			const char	*what( void ) const throw();
	};

	class FileNotOpen : public std::exception
	{
		public:
			const char	*what( void ) const throw();
	};

	std::string	getName( void ) const;
	bool		getSign( void ) const;
	int			getGradeS( void ) const;
	int			getGradeE( void ) const;

	virtual void		beSigned( Bureaucrat const &b );
	virtual void		execute( Bureaucrat const &executor ) const = 0;
	void	checkExec(const Bureaucrat &executor ) const;
};

std::ostream	&operator<<( std::ostream &o, const AForm &f );

#endif