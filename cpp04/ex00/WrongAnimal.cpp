#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	this->type = "Animal";
	std::cout << "Animal class def constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Animal class def destructor" << std::endl;
}

std::string WrongAnimal::getType() const{
	return (this->type);
}

void WrongAnimal::makeSound() const{
	std::cout << "normal animal" << std::endl;	
}