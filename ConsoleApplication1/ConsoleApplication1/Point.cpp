#include "stdafx.h"
#include <iostream>
#include <math.h>

namespace cpp_math{
	class Point {
	private:
		float* mX;
		float* mY;
		float* mZ;
	public:
		Point();
		Point(float x, float y, float z);
		Point::Point(const Point& point);
		Point& Point::operator=(const Point& other);
		float Point::getX();
		float Point::getY();
		float Point::getZ();
		void Point::setX(float x);
		void Point::setY(float y);
		void Point::setZ(float z);
		void Point::setXY(float x, float y);
		void Point::setYZ(float y, float z);
		void Point::setXYZ(float x, float y, float z);
		Point Point::getAddiction(const Point& p);
		Point Point::getSubtraction(const Point& p);
		Point& Point::add(const Point&p);
		Point& Point::subtract(const Point& p);
		float Point::distance(const Point& p);
		~Point();
	};
}
using namespace cpp_math;

Point::Point() {
	*mX = 0.0f;
	*mY = 0.0f;
	*mZ = 0.0f;
}

Point::Point(float x, float y, float z) {
	*mX = x;
	*mY = y;
	*mZ = z;
}

Point::Point(const Point& p) {
	mX = p.mX;
	mY = p.mY;
	mZ = p.mZ;
}

Point& Point::operator=(const Point& other) {
	mX = other.mX;
	mY = other.mY;
	mZ = other.mZ;
	return *this;
}

float Point::getX() {
	return *mX;
}
float Point::getY() {
	return *mY;
}
float Point::getZ() {
	return *mZ;
}

void Point::setX(float x) {
	*mX = x;
}
void Point::setY(float y) {
	*mY = y;
}
void Point::setZ(float z) {
	*mZ = z;
}
void Point::setXY(float x, float y) {
	*mX = x;
	*mY = y;
}
void Point::setYZ(float y, float z) {
	*mY = y;
	*mZ = z;
}
void Point::setXYZ(float x, float y, float z) {
	*mX = x;
	*mY = y;
	*mZ = z;
}

Point Point::getAddiction(const Point& p) {
	Point nObject;
	nObject.setXYZ(*mX + *p.mX, *mY + *p.mY, *mZ + *p.mZ);
	return nObject;
}
Point Point::getSubtraction(const Point& p) {
	Point nObject;
	nObject.setXYZ(*mX - *p.mX, *mY - *p.mY, *mZ - *p.mZ);
	return nObject;
}

Point& Point::add(const Point& p) {
	setXYZ(*mX + *p.mX, *mY + *p.mY, *mZ + *p.mZ);
	return *this;
}
Point& Point::subtract(const Point& p) {
	setXYZ(*mX - *p.mX, *mY - *p.mY, *mZ - *p.mZ);
	return *this;
}

float Point::distance(const Point& p) {
	float distance;
	distance = sqrt(pow((*mX - *p.mX), 2) + pow((*mY - *p.mY), 2) + pow((*mZ - *p.mZ), 2));
	return distance;
}

Point::~Point(){
	delete mX;
	delete mY;
	delete mZ;
}