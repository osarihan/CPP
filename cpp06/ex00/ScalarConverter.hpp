/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: ScalarConverter.hpp
  date: 2023-06-05T14:39:46.049Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP
# include <iostream>
# include <limits>
# include <iomanip>
# include <cmath>
# include <cstdio>

class ScalarConverter {
    private:

    public:
        /*ortadox*/
		ScalarConverter();
		~ScalarConverter();
        ScalarConverter(const ScalarConverter &obj);
    
        /*subject*/
		static void convert(std::string arg);
		static int checker(std::string str);
		static void pseudoPrinter(std::string str);
		static void print(int b, float c, double d);
		static void printImpossible(void);

		static void convertChar(char i);
		static void convertInt(int i);
		static void convertFloat(float i);
		static void convertDouble(double i);
};


#endif