/*
*Title: COMP 3140 Assignment 4
*File: Circle.h
*Description: This file is the header file for the Circle class.
*It is used to define the functions and data members.
*It inherits from the Shape class.
*Author: Emma Panchuk
*Student ID: T00523108
*Date: June 11th, 2019
*
*/

#pragma once
#include "Shape.h"


class Circle : public Shape {
public:
	Circle(long, long, double);
	~Circle();
	long getCenterX() const;
	long getCenterY() const;
	double getRadius() const;
	void calcArea();

private:
	long centerX{ 0 };
	long centerY{ 0 };
	double radius{ 0 };

};