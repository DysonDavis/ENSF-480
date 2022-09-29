// shape.cpp
// ENSF 480 - Lab 2 - Exercise B
// Authors: John Delsing and Dyson Davis

#include "shape.h"
#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

Shape::Shape(double a, double b, string name): origin(a, b){
    shapeName = new char[sizeof(name)];
    strcpy(shapeName, name.c_str());
}
Shape::~Shape(){
    delete[] shapeName;
}
const Point& Shape::getOrigin() const{
    return origin;
}
const char* Shape::getName() const{
    return shapeName;
}
void Shape::display(){
    cout << "Shape Name: " << this->getName();
    cout << "X-coordinate: %f" << this->getOrigin().get_x();
    cout << "Y-coordinate: %f" << this->getOrigin().get_y();
}
double Shape::distance(Shape& other){
    double x_distance = this->origin.get_x() - other.origin.get_x();
    double y_distance = this->origin.get_y() - other.origin.get_y();
    double dist = sqrt(pow(x_distance, 2.0) + pow(y_distance, 2.0));
    return dist;
}
double Shape::distance (Shape& the_shape, Shape& other){
    double x_distance = the_shape.origin.get_x() - other.origin.get_x();
    double y_distance = the_shape.origin.get_y() - other.origin.get_y();
    double dist = sqrt(pow(x_distance, 2.0) + pow(y_distance, 2.0));
    return dist;
}
void Shape::move(double dx, double dy){
    
}
