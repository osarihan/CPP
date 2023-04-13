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
  date: 2023-04-13T23:53:48.897Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main( void )
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	//src->learnMateria(new Ice());
	//src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");


	AMateria* tmp;
	tmp = src->createMateria("ice");
	//me->use(0, *bob);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	//tmp = src->createMateria("ice");
	//me->equip(tmp);
	//tmp = src->createMateria("ice");
	//me->equip(tmp);
	//tmp = src->createMateria("ice");
	//me->equip(tmp);
	//delete(tmp);
	//tmp = src->createMateria("ice");
	//me->equip(tmp);
	//delete(tmp);
	//tmp = src->createMateria("ice");
	//me->equip(tmp);
	//delete(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}