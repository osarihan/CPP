/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Array.hpp
  date: 2023-06-06T13:35:22.627Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h>

template<typename T>
class Array
{
	public:

		unsigned int elements;
		T *type;

		//def const
		Array()
		{
			std::cout << "Default Constructor called." << std::endl;
			this->elements = 0;
			this->type = NULL;
		}

		//def dest
		~Array(){
			std::cout << "Destructor called." << std::endl;
			delete [] type;
		}

		//array maker
		Array(unsigned int n){
			this->elements = n;
			this->type = new T[n];

			//default value
			for (unsigned int i = 0; i < n; i++)
			{
				this->type[i] = T();
			}
		}

		//copy const
		Array(const Array &obj){
			std::cout << "copy constuctor called." << std::endl;
			*this = obj;
		}

		//copy assg operator
		Array &operator=(const Array &obj){
			std::cout << "copy assignment operator called." << std::endl;

			this->elements = obj.elements;
			this->type = new T[this->elements];

			for (unsigned int i = 0; i < this->elements; i++)
			{
				this->type[i] = obj.type[i];
			}

			return *this;
		}

		//overload []
		T &operator[](unsigned int i){
			std::cout << "operator []" << std::endl;
			if (i > this->elements)
			{
				throw std::out_of_range("Array index out of bounds");
			}
			return (this->type[i]);
		}

		//getsize
		int	size() const
		{
			return (this->elements);
		}
};

#endif
