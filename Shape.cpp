#include "Shape.h"
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

Circle::Circle(const double &x, const double &y, const double &r) : Shape(), x(x), y(y), r(r) {
    /* this->x = x;
    this->y = y;
    this->r = r;
 */
}
Circle::~Circle(){
    //std::cout << "Destructor of circle";
}

std::string Circle::to_string() const {
    std::stringstream ss;
    ss << "Circle centered at " << "(" << this->x << "," << this-> y <<") with radius " << this->r <<" ...";
    std::string str = ss.str();
    return str;
}

void Circle::centre_at(const double x, const double y){
    this->x = x;
    this->y = y;
}

Rectangle::Rectangle(const double &x0,const double &y0,const double &x1,const double &y1) : Shape(), x0(x0), x1(x1), y0(y0),y1(y1) {

}

Rectangle::~Rectangle(){}

std::string Rectangle::to_string() const {
    std::stringstream ss;
    ss << "Rectangle at [(" << this->x0 << ", " << this->y0 << "), (" << "(" << this->x1 <<", "<<this->y1 << ")] with width " << fabs(this->x1 - this->x0) << ", height " << abs(this->y1 - this->y0) <<"...";
    std::string str = ss.str();
    return str;
}

void Rectangle::centre_at(const double x, const double y) {
    double width = fabs(x1 - x0);
    double height = fabs(y1 - y0);

    double oldx = width/2;
    double oldy = height/2;

    double xdifference = x - oldx;
    double ydifference = y - oldy;
    this->x0 = this->x0 + xdifference;
    this->x1 = this->x1 + xdifference;
    this->y0 = this->y0 + ydifference;
    this->y1 = this->y1 + ydifference;


}

Triangle::Triangle (const double &x0,const double &y0,const double &x1,const double &y1, const double &x2, const double &y2):
Shape(), x0(x0), y0(y0), x1(x1), y1(y1), x2(x2), y2(y2) {}

Triangle::~Triangle(){}

std::string Triangle::to_string() const{
    double xSquared = (x1-x0) * (x1-x0);
    double ySquared = (y1-y0) * (y1-y0);
    double sideOne = sqrt(xSquared + ySquared);

    double xSquaredTwo = (x2-x1) * (x2-x1);
    double ySquaredTwo = (y2-y1) * (y2-y1);
    double sideTwo = sqrt(xSquaredTwo + ySquaredTwo);

    double xSquaredThree = (x0-x2) * (x0-x2);
    double ySquaredThree = (y0-y2) * (y0-y2);
    double sideThree = sqrt(xSquaredThree + ySquaredThree);


    std::stringstream ss;
    ss << "Triangle at [(" << this->x0 << ", " << this->y0 << "), (" << "(" << this->x1 <<", "<<this->y1 << "), ("<< this->x2 << ", "<< this->y2
     << ")] with side lengths " << sideOne << ", " << sideTwo << ", and " << sideThree <<"...";
    std::string str = ss.str();
    return str;
}

void Triangle::centre_at(const double x, const double y) {
    double oldX = (this->x0 + this->x1 + this->x2)/3;
    double oldY = (this->y0 + this->y1 + this->y2)/3;

    double differenceX = x - oldX;
    double differenceY = y - oldY;

    this->x0 = x0 + differenceX;
    this->x1 = x1 + differenceX;
    this->x2 = x2 + differenceX;
    this->y0 = y0 + differenceY;
    this->y1 = y1 + differenceY;
    this->y2 = y2 + differenceY;
    
}

