/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: ScalarConverter.cpp
  date: 2023-06-05T14:39:39.263Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "ScalarConverter.hpp"

// "-inff": Negatif sonsuzluk değeri (float türünde).
// "+inff": Pozitif sonsuzluk değeri (float türünde).
// "nanf": Float türünde "not-a-number" (NaN) değeri.
// "-inf": Negatif sonsuzluk değeri (double türünde).
// "+inf": Pozitif sonsuzluk değeri (double türünde).
// "nan": Double türünde "not-a-number" (NaN) değeri.

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

void ScalarConverter::print(int b, float c, double d)
{
	if (b < 0)
		std::cout << "char: " << "impossible" << std::endl;
	else if (b <= 32 || b >= 127)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << static_cast<char>(b) << "'" << std::endl;

	std::cout << "int: " << b << std::endl;

	int x = (int)c; //42.0f
	if (c == (float)x)
	{
		std::cout << "float: " << c << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << c << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

void ScalarConverter::printImpossible()
{
	std::cout << "float: " << "impossible" << std::endl;
	std::cout << "double: " << "impossible" << std::endl;
	std::cout << "float: " << "impossible" << std::endl;
	std::cout << "double: " << "impossible" << std::endl;
}

void ScalarConverter::convertInt(int i)
{
	print(i,i,i);
}

void ScalarConverter::convertFloat(float i)
{
	print(i,i,i);
}

void ScalarConverter::convertDouble(double i)
{
	print(i,i,i);
}

void ScalarConverter::pseudoPrinter(std::string str)
{
	std::cout << "char : impossible" << std::endl << "int : impossible" << std::endl;
	std::cout << "float : " << str;
	if (str[strlen(str.c_str()) - 1] != 'f')
		std::cout << "f";
	std::cout << std::endl;
	std::cout << "double : " << str << std::endl;
}

int ScalarConverter::checker(std::string str)
{
	unsigned int n = 0;
	unsigned int s = 0;
	unsigned int f = 0;
	unsigned int dot = 0;
	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
		return (5);
	for (int i = 0 ; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]))
			n++;
		else if (i == 0 && (str[i] == '+' || str[i] == '-'))
		{
			n++;
			s++;
		}
		else if (str[i] == '.')
		{
			dot++;
			n++;
		}
		else if (str[i] == 'f' && strlen(str.c_str()) != 1) // 123f or char f
		{
			f++;
			n++;
		}
		else
			s++;
	}
	if (dot > 1 || f > 1)
		return (0);
	else if (f == 1 && dot == 1 && n == strlen(str.c_str()))
		return (1);
	else if (f == 0 && dot == 1 && n == strlen(str.c_str()))
		return (2);
	else if (n == strlen(str.c_str()))
		return (3);
	else if (s == strlen(str.c_str()) && s == 1)
		return (4);
	else
		return (-1);
}

void ScalarConverter::convert(std::string arg)
{
	double tmpD;
	switch(ScalarConverter::checker(arg))
	{
		case 0:
			std::cout << "impossible" << std::endl;
			ScalarConverter::printImpossible();
			break;
		case 1:
			std::cout << "float deger girildi" << std::endl;
			ScalarConverter::convertFloat(atof(arg.c_str()));
			break;
		case 2:
			std::cout << "double deger girildi" << std::endl;
			tmpD = (double)atof(arg.c_str());
			ScalarConverter::convertDouble(tmpD);
			break;
		case 3:
			std::cout << "int deger girildi" << std::endl;
			ScalarConverter::convertInt(atoi(arg.c_str()));
			break;
		case 4:
			std::cout << "tek harf" << std::endl;
			ScalarConverter::convertInt(arg[0]);
			break;
		case 5:
			std::cout << "pseudo" << std::endl;
			ScalarConverter::pseudoPrinter(arg);
			break;
		default:
			std::cerr << "ARG ERR!" << std::endl;
			break;
	}
}
