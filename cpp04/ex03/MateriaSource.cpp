/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: MateriaSource.cpp
  date: 2023-04-13T23:54:04.285Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	int i = 0;

	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource( const	MateriaSource &m )
{
	int i = 0;

	while (i < 4)
	{
		this->_inventory[i] = NULL;
		if (m._inventory[i] != NULL)
			this->_inventory[i] = m._inventory[i]->clone();
		i++;
	}
}

MateriaSource	&MateriaSource::operator=( const MateriaSource &m )
{
	if (this != &m)
	{
		int i = 0;

		while (i < 4)
		{
			if (this->_inventory[i] != NULL)
				delete (this->_inventory[i]);
			this->_inventory[i] = NULL;
			if (m._inventory[i] != NULL)
				this->_inventory[i] = m._inventory[i]->clone();
			i++;
		}
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *m)
{
	int	i = 0;

	while (i < 4)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
		i++;
	}
	delete m;
}

AMateria*	MateriaSource::createMateria( std::string const &type)
{
	int	i = 0;

	while (i < 4)
	{
		if (this->_inventory[i] != NULL)
		{
			if (this->_inventory[i]->getType() == type)
				return (this->_inventory[i]->clone());
		}
		i++;
	}
	return (0);
}

MateriaSource::~MateriaSource()
{
	int	i = 0;

	while (i < 4)
	{
		if (this->_inventory[i] != NULL)
			delete (this->_inventory[i]);
		i++;
	}
}