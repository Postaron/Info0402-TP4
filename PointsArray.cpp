#include "PointsArray.h"

PointsArray::PointsArray(int size = 5) :
		size(size), nbr_inside(0) {
	tab = new Point[this->size];
}

PointsArray::~PointsArray() {
	delete tab;
}

bool PointsArray::empty() {
	return nbr_inside == 0;
}

int PointsArray::getSize() const {
	return size;
}

Point& PointsArray::get(int i) const {
	return tab[i];
}

Point& PointsArray::operator [](size_t n) {
	return tab[n];
}

Point& PointsArray::operator [](size_t n) const {
	return tab[n];
}
