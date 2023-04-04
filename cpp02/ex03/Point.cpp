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

int my_max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int my_min(int x, int y) {
    if (x > y) {
        return y;
    } else {
        return x;
    }
}

bool isOnEdge(Point a, Point b, Point c, Point point)
{
    // Check if point is collinear with edge (a, b)
    float d1 = (point.get_x() - a.get_x()) * (b.get_y() - a.get_y()) - (b.get_x() - a.get_x()) * (point.get_y() - a.get_y());
    if (d1 == 0 && point.get_x() >= my_min(a.get_x(), b.get_x()) && point.get_x() <= my_max(a.get_x(), b.get_x()) && point.get_y() >= my_min(a.get_y(), b.get_y()) && point.get_y() <= my_max(a.get_y(), b.get_y())){

        std::cout << "kenarda" << std::endl;
        return false;
    }
    // Check if point is collinear with edge (b, c)
    float d2 = (point.get_x() - b.get_x()) * (c.get_y() - b.get_y()) - (c.get_x() - b.get_x()) * (point.get_y() - b.get_y());
    if (d2 == 0 && point.get_x() >= my_min(b.get_x(), c.get_x()) && point.get_x() <= my_max(b.get_x(), c.get_x()) && point.get_y() >= my_min(b.get_y(), c.get_y()) && point.get_y() <= my_max(b.get_y(), c.get_y())){

        std::cout << "kenarda" << std::endl;
        return false;
    }
    // Check if point is collinear with edge (c, a)
    float d3 = (point.get_x() - c.get_x()) * (a.get_y() - c.get_y()) - (a.get_x() - c.get_x()) * (point.get_y() - c.get_y());
    if (d3 == 0 && point.get_x() >= my_min(a.get_x(), c.get_x()) && point.get_x() <= my_max(a.get_x(), c.get_x()) && point.get_y() >= my_min(a.get_y(), c.get_y()) && point.get_y() <= my_max(a.get_y(), c.get_y())){

        std::cout << "kenarda" << std::endl;
        return false;
    }
    return true;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
    //KENAR KONTROL
    if (isOnEdge(a, b, c, point) == false){   
        return (0);
    }
    //ICINDE MI DEGIL MI
	float d1 = ((point.get_x() - b.get_x()) * (a.get_y() - b.get_y()) - (a.get_x()- b.get_x()) * (point.get_y() - b.get_y())); //ucgen point, a ve b
	float d2 = ((point.get_x() - c.get_x()) * (b.get_y() - c.get_y()) - (b.get_x()- c.get_x()) * (point.get_y() - c.get_y())); //ucgen point, b ve c
	float d3 = ((point.get_x() - a.get_x()) * (c.get_y() - a.get_y()) - (c.get_x()- a.get_x()) * (point.get_y() - a.get_y()));
	
	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	
	return (!(has_neg && has_pos));
}