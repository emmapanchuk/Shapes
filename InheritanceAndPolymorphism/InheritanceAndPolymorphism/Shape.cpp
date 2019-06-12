/*
*Title: COMP 3140 Assignment 4
*File: Shape.cpp
*Description: This file is the cpp file for the shape class.
*It is used to write the functionality for the functions in the shape class.
*Author: Emma Panchuk
*Student ID: T00523108
*Date: June 11th, 2019
*
*/

#include "Shape.h"
#include <iostream>

//Destructor
Shape::~Shape() {
	std::cout << "Shape object has been destroyed." << std::endl;
}
double Shape::getArea() const {
	return area;

}
void Shape::setArea(double areaInput) {
	area = areaInput;
}
void Shape::calcArea() {

}