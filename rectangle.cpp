// rectangle.cpp
// ENSF 480 - Lab 2 - Exercise B
// Authors: John Delsing and Dyson Davis

#include "rectangle.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

Rectangle::Rectangle(double a, double b, double side1, double side2, string name): Square(a, b, side1, name){
    side_b = side2;
}

const double Rectangle::area() const{
    return (this->getSideA()) * (this->getSideB());
}
const double Rectangle::perimeter() const{
    return (2 * (this->getSideA())) + (2 * (this->getSideB()));
}
const double Rectangle::getSideA() const{
    return this->side_a;
}
const double Rectangle::getSideB() const{
    return this->side_b;
}
void Rectangle::set_side_a(const int& a)
{
    this->side_a = a;
}
void Rectangle::set_side_b(const int &b)
{
    this->side_b = b;
}

void Rectangle::display(){
    cout << "\nShape Name: " << Shape::shapeName;
    cout << "\nX-coordinate: " << Shape::origin.get_x();
    cout << "\nY-coordinate: " << Shape::origin.get_y();
    cout << "\nSide a: " << getSideA();
    cout << "\nSide b: " << getSideB();
    cout << "\nArea: " << area();
    cout << "\nPerimeter: " << perimeter();
}
