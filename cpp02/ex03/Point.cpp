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

Point::Point(void){
	this->x = 0;
	this->y = 0;
}

Point::Point(float a, float b){
	this->x = a;
	this->y = b
}

// float dist(Point p1, Point p2){
//     float dx = p1.x.toFloat() - p2.x.toFloat();
//     float dy = p1.y.toFloat() - p2.y.toFloat();      
//     return (sqrt(dx*dx + dy*dy));
// }

// float tri_area(Point p1, Point p2, Point p3){
//     float a = dist(p1, p2);
//     float b = dist(p1, p3);
//     float c = dist(p2, p3);
//     float s = (a + b + c) / 2;
//     return sqrt(s*(s-a)*(s-b)*(s-c));
   
// }

// Point	&Point::operator=(Point &fixed)
// {
// 	this->x = 
// 	return (*this);
// }

bool bsp( Point const x4, Point const x3, Point const x2, Point const x1){
    // float a1 = tri_area(p1, p2, p3);
    // float a2 = tri_area(p1, p2, p4);
    // float a3 = tri_area(p1, p3, p4);
    // float a4 = tri_area(p2, p3, p4);
    // float total = a1 + a2 + a3 + a4;
    // if (totalArea == a1 || totalArea == a2 || totalArea == a3 || totalArea == a4) {
    //     return 0;
    // } else {
    //     return -1;
    // }
    float d1, d2, d3;
    bool neg, pos;

    d1 = (x4.x.toFloat() - x2.x.toFloat()) * (x1.y.toFloat() - x2.y.toFloat()) \
        * (x1.x.toFloat() - x2.x.toFloat()) * (x4.y.toFloat() - x2.y.toFloat());
    
    d2 = (x4.x.toFloat() - x3.x.toFloat()) * (x2.y.toFloat() - x3.y.toFloat()) \
        * (x2.x.toFloat() - x3.x.toFloat()) * (x4.y.toFloat() - x3.y.toFloat()); 

    d3 = (x4.x.toFloat() - x1.x.toFloat()) * (x3.y.toFloat() - x1.y.toFloat()) \
        * (x3.x.toFloat() - x1.x.toFloat()) * (x4.y.toFloat() - x1.y.toFloat());

    neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    pos = (d1 > 0) || (d2 > 0) || (d3 > 0);  

    return !(neg && pos); 
}
