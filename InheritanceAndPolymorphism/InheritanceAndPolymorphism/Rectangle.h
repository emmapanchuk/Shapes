/*
*Title: COMP 3140 Assignment 4
*File: Rectangle.h
*Description: This file is the header file for the Rectangle class.
*It is used to define the functions and data members.
*It inherits from the Shape class.
*Author: Emma Panchuk
*Student ID: T00523108
*Date: June 11th, 2019
*
*/

#pragma once
#include "Shape.h"

class Rectangle : public Shape{
public:
	Rectangle(long, long);
	~Rectangle();
	long getWidth() const;
	long getLength() const;
	void calcArea();

private:
	long width{ 0 };
	long length{ 0 };

};