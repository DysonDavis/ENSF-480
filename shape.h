// shape.h
// ENSF 480 - Lab 2 - Exercise B
// Authors: John Delsing and Dyson Davis

#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"
#include <string>

class Shape{
public:
    Shape(double a, double b, std::string name);
    ~Shape();
    const Point& getOrigin() const;
    const char* getName() const;
    virtual void display();
    double distance(Shape& other);
    static double distance (Shape& the_shape, Shape& other);
    void move (double dx, double dy);
protected:
    Point origin;
    char* shapeName;
};
#endif
