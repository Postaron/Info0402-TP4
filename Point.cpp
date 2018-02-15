#include "Point.h"

Point::Point() :
		x(0), y(0) {

}

Point::Point(int x, int y) :
		x(x), y(y) {
}

int Point::getX() const {
	return x;
}

void Point::setX(int x) {
	this->x = x;
}

int Point::getY() const {
	return y;
}

void Point::setY(int y) {
	this->y = y;
}

Point::~Point() {
}

Point::Point(const Point& p) {
	x = p.x;
	y = p.y;
}
