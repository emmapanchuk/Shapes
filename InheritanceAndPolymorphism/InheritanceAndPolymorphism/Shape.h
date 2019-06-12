#pragma once
/*
*Title: COMP 3140 Assignment 4
*File: Shape.h
*Description: This file is the header file for the shape class.
*It is used to define the functions and data members.
*Author: Emma Panchuk
*Student ID: T00523108
*Date: June 11th, 2019
*
*/

class Shape {
public:
	~Shape();
	double getArea() const;
	void setArea(double);
	virtual void calcArea() = 0;

private:
	double area{ 0 };

};