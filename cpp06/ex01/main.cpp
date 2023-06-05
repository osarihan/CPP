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
  date: 2023-06-05T14:39:55.918Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

// uintptr_t--> işaretçilerin tam sayılarla işlem yapılabilmesini sağlar
// reinterpret_cast: Her türlü gösterici türünü  her türlü  gösterici türüne çevirebilir. Bilinçsiz kullanımı kesinlikle tavsiye edilmez. Aslında basit olarak
// göstericinin diğer göstericiye binary olarak kopyalanmasıdır.

int main(void)
{
	Data d;
	Data *newPtr = NULL;
	uintptr_t raw;
	Serializer serilize;

	d.a = 10;
	raw = serilize.serialize(&d);
	newPtr = serilize.deserialize(raw);

	std::cout << raw << std::endl;
	std::cout << newPtr->a << std::endl;
}
