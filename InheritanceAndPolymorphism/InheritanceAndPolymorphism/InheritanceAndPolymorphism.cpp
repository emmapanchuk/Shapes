/*
*Title: COMP 3140 Assignment 4
*File: InheritanceAndPolymorphism.cpp
*Description: This file is used as the Driver file.
*It demonstractes the circle and rectangle objects. It uses both static
*and dynamic binding.
*Author: Emma Panchuk
*Student ID: T00523108
*Date: June 11th, 2019
*
*/
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
using namespace std;


int main()
{
	//Create a shape pointer object. This will be used to demonstrate
	//static vs dynamic binding
	Shape* sPtr;

	Rectangle rec{ 7, 14 };
	Circle circ{ 10, 9, 4.32 };

	
	cout << "Rectangle width: " << rec.getWidth() << endl;
	cout << "Rectangle length: " << rec.getLength() << endl;
	cout << "Rectangle area: " << rec.getArea() << endl;
	//static binding of rectangle object
	rec.calcArea();

	cout << "\nCircle center x: " << circ.getCenterX() << endl;
	cout << "Circle center y: " << circ.getCenterY() << endl;
	cout << "Circle radius: " << circ.getRadius() << endl;
	cout << "Circle area: " << circ.getArea() << endl;
	//static binding of circle object
	circ.calcArea();

	//set invalid data as area to demonstrate dynamic binding afterwards
	rec.setArea(29);
	circ.setArea(72);

	cout << "\nRectangle invalid area (for testing purposes): " << rec.getArea() << endl;
	cout << "Circle invalid area (for testing purposes): " << circ.getArea() << endl;

	//set the shape pointer to the rectangle object
	sPtr = &rec;

	//dynamic binding
	sPtr->calcArea();

	cout << "\nRecalculated rectangle area: " << rec.getArea() << endl;

	//set the shape pointer to the circle object
	sPtr = &circ;

	//dynamic binding
	sPtr->calcArea();

	cout << "\nRecalculated circle area: " << circ.getArea() << endl;

	system("pause");
	return 0;
}

