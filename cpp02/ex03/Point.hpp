/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Point.hpp
  date: 2023-03-29T23:02:32.545Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point{
private:
	Fixed const x;
	Fixed const y;
public:
	Point(void);
	Point(float a, float b);
    float get_x() const;
    float get_y() const;
	~Point(void);
	Point	&operator=( const Point &point );   
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif