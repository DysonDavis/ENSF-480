// point.cpp
// ENSF 480 - Lab 2 - Exercise B
// Authors: John Delsing and Dyson Davis

#include "point.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int Point::count = 0;

Point::Point(const int a, const int b)
{
    x = a;
    y = b;
    idnumber = 1001 + counter();
    count++;
}

const double Point::get_x() const{
    return x;
}
const double Point::get_y() const{
    return y;
}
const int Point::get_idnumber() const{
    return idnumber;
}
void Point::setx(const double a){
    x = a;
}
void Point::sety(const double b){
    y = b;
}

const int Point::counter() const{
    return count;
}

void Point::display(){
    cout << "\nX-coordinate: " << this->get_x();
    cout << "\nY-coordinate: " << this->get_y();
}

const double Point::distance(Point& a){
    double x_distance = this->get_x() - a.get_x();
    double y_distance = this->get_y() - a.get_y();
    double dist = sqrt(pow(x_distance, 2.0) + pow(y_distance, 2.0));
    return dist;
}

const double Point::distance(Point& a, Point& b){
    double x_distance = a.get_x() - b.get_x();
    double y_distance = a.get_y() - b.get_y();
    double dist = sqrt(pow(x_distance, 2.0) + pow(y_distance, 2.0));
    return dist;
}
