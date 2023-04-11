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
  date: 2023-04-11T01:39:46.835Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
//NORMAL MAIN
// int	main( void )
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	//std::cout << std::endl;
// 	//std::cout << meta->getType() << " " << std::endl;
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;

// 	//std::cout << std::endl;
// 	meta->makeSound();
// 	j->makeSound();
// 	i->makeSound(); //will output the cat sound!

// 	std::cout << std::endl;
// 	delete i;
// 	delete j;
// 	delete meta;
// }

//BOZUK MAIN
int	main( void )
{
	const WrongAnimal* meta = new WrongAnimal();
	//const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	//std::cout << std::endl;
	//std::cout << meta->getType() << " " << std::endl;
	//std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	//std::cout << std::endl;
	meta->makeSound();
	//j->makeSound();
	i->makeSound(); //will output the cat sound!

	std::cout << std::endl;
	delete i;
	//87delete j;
	delete meta;
}
