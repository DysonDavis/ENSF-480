// rectangle.h
// ENSF 480 - Lab 2 - Exercise B
// Authors: John Delsing and Dyson Davis

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h"
#include <string>

class Rectangle : public Square{
public:
    Rectangle(double a, double b, double side1, double side2, std::string name);
    const double area() const;
    const double perimeter() const;
    const double getSideA() const;
    const double getSideB() const;
    void set_side_a(const int &a);
    void set_side_b(const int &b);
    void display();
private:
    double side_b;
};
#endif
