/*
*Title: COMP 3140 Assignment 4
*File: Rectangle.cpp
*Description: This file is the cpp file for the Rectangle class.
*It is used to write the functionality for the functions in the Rectangle class.
*Author: Emma Panchuk
*Student ID: T00523108
*Date: June 11th, 2019
*
*/

#include "Rectangle.h"
#include "Shape.h"
#include <iostream>

//Constructor used to create a Rectangle object. The length and width are validated
//and then assigned. calcArea() is called afterwards to set the area variable
Rectangle::Rectangle(long lengthInput, long widthInput){
	if (lengthInput >= 0) {
		length = lengthInput;
	}
	if (widthInput >= 0) {
		width = widthInput;
	}
	
	calcArea();
}
//Destructor
Rectangle::~Rectangle() {
	std::cout << "Rectangle object has been destroyed." << std::endl;
}
long Rectangle::getWidth() const {
	return width;

}
long Rectangle::getLength() const {
	return length;

}
//Calculate the area of the Rectangle and store it using the setArea function
//in the base class
void Rectangle::calcArea() {
	setArea(length * width);
}