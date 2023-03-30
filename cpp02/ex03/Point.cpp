/********************************************************************************************
	   )                        )     (                (      (         )                )  
   ( /(    (                ( /(     )\ )     (       )\ )   )\ )   ( /(     (       ( /(   
   )\())   )\ )        (    )\())   (()/(     )\     (()/(  (()/(   )\())    )\      )\())  
  ((_)\   (()/(        )\  ((_)\     /(_)) ((((_)(    /(_))  /(_)) ((_)\  ((((_)(   ((_)    
   ((_)    /(_))_   _ ((_)  _((_)   (_))    )\ _ )\  (_))   (_))    _((_)  )\ _ )\   _((_)  
   / _ \  (_)) __| | | | | |_  /    / __|   (_)_\(_) | _ \  |_ _|  | || |  (_)_\(_) | \| |  
  | (_) |   | (_ | | |_| |  / /     \__ \    / _ \   |   /   | |   | __ |   / _ \   | .` |  
   \___/     \___|  \___/  /___|    |___/   /_/ \_\  |_|_\  |___|  |_||_|  /_/ \_\  |_|\_|  
																							
																							
  file: Point.cpp
  date: 2023-03-29T23:03:13.251Z
  mail: osarihan@student.42kocaeli.com.tr
 ********************************************************************************************/

#include "Fixed.hpp"
#include "Point.hpp"
////////////////////////POINT CLASS FUNCTIONS//////////////////////

Point::~Point(void){}

Point::Point(void) : x(Fixed(0)) , y(Fixed(0)){

}

Point::Point(float a, float b) : x(Fixed(a)) , y(Fixed(b)){

}

float Point::get_x()const{
    return(this->x.toFloat());
}

float Point::get_y()const{
    return(this->y.toFloat());   
}

static float myAbs(float x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
    // //KENAR
    // float epsilon = 1e-5;
    // if (myAbs((c.get_x() - b.get_y()) * a.get_x() - (c.get_x() - b.get_x()) * a.get_y() + c.get_x() * b.get_y() - c.get_y() * b.get_x()) < epsilon ||
    //     myAbs((point.get_y() - c.get_y()) * a.get_x() - (point.get_x() - c.get_x()) * a.get_y() + point.get_x() * c.get_y() - point.get_y() * c.get_x()) < epsilon ||
    //     myAbs((b.get_y() - point.get_y()) * a.get_x() - (b.get_x() - point.get_x()) * a.get_y() + b.get_x() * point.get_y() - b.get_y() * point.get_x()) < epsilon) {
    //     std::cout << "kenarda" << std::endl;
    //     return false;
    // }

	float d1 = ((point.get_x() - b.get_x()) * (a.get_y() - b.get_y()) - (a.get_x()- b.get_x()) * (point.get_y() - b.get_y()));
	float d2 = ((point.get_x() - c.get_x()) * (b.get_y() - c.get_y()) - (b.get_x()- c.get_x()) * (point.get_y() - c.get_y()));
	float d3 = ((point.get_x() - a.get_x()) * (c.get_y() - a.get_y()) - (c.get_x()- a.get_x()) * (point.get_y() - a.get_y()));
	
	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	
	return (!(has_neg && has_pos));
}