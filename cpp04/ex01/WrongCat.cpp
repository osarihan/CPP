#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->type = "cat";
	std::cout << "Cat class def constructor called" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "Cat class def destructor called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "Cat says: MEOW!" << std::endl;	
}

std::string	WrongCat::getType() const{
	return (this->type);
}

WrongCat::WrongCat( const WrongCat &cat )
{
	this->WrongAnimal::type = cat.type;
	std::cout << "Cat copy constructor called!" << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &cat )
{
	if (this != &cat)
	{
		this->type = cat.type;
	}
	return (*this);
}