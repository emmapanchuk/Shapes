/*
*Title: COMP 3140 Assignment 4
*File: Circle.cpp
*Description: This file is the cpp file for the Circle class.
*It is used to write the functionality for the functions in the Circle class.
*Author: Emma Panchuk
*Student ID: T00523108
*Date: June 11th, 2019
*
*/

#pragma once
#include "Circle.h"
#include "Shape.h"
#include <iostream>


//Create a circle object with a centerX, centerY, and radius value. Call the calcArea()
//function to calculate and set the area variable
Circle::Circle(long centerXInput, long centerYInput, double radiusInput)
	: centerX{ centerXInput }, centerY{ centerYInput }, radius{ radiusInput } {

	calcArea();
}
//Destructor
Circle::~Circle() {
	std::cout << "Circle object has been destroyed." << std::endl;
}
long Circle::getCenterX() const {
	return centerX;
}
long Circle::getCenterY() const {
	return centerY;
}
double Circle::getRadius() const {
	return radius;
}
//Calculate the area of the circle and store it using the setArea function
//in the base class
void Circle::calcArea() {
	setArea(3.14159 * radius * radius);
}
