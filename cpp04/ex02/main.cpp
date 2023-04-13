#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <unistd.h>

int leak_check(){
	int size = 5;
	Animal	*arrayAnimals[2 * size];

	for (int i = 0; i < size; i++)
	{
		arrayAnimals[i] = new Dog();
		arrayAnimals[size + i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < 2 * size; i++)
		delete arrayAnimals[i];
	return (31);
}

int	main( void )
{
	leak_check();
	pause();
}