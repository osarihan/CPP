#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
private:

protected:
	std::string type;
public:
	WrongAnimal();
	~WrongAnimal();
	std::string getType() const;
	void makeSound() const;
};

#endif