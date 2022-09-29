// square.cpp
// ENSF 480 - Lab 2 - Exercise B
// Authors: John Delsing and Dyson Davis

#include "square.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

Square::Square(double a, double b, double side, string name): Shape(a, b, name){
    side_a = side;
}
const double Square::area() const{
    return pow(this->getSideA(), 2.0);
}
const double Square::perimeter() const{
    return (4.0) * (this->getSideA());
    
}
const double Square::getSideA() const{
    return this->side_a;
}
void Square::display(){
    cout << "\nShape Name: " << Shape::shapeName;
    cout << "\nX-coordinate: " << Shape::origin.get_x();
    cout << "\nY-coordinate: " << Shape::origin.get_y();
    cout << "\nSide a: " << getSideA();
    cout << "\nArea: " << area();
    cout << "\nPerimeter: " << perimeter();
}
