#include "PointsArray.h"

#include <algorithm>

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

inline Point& PointsArray::get(int i) const {
	return tab[i];
}

void PointsArray::push_back(Point& p) {
	tab[nbr_inside] = p;
	++nbr_inside;
}

void PointsArray::pop_back() {
	--nbr_inside;
}

inline Point& PointsArray::operator [](size_t n) const {
	return tab[n];
}

PointsArray::PointsArray(const PointsArray& p) {
	nbr_inside = p.nbr_inside;
	size = p.size;
	tab = new Point[size];
	std::copy(p.tab, p.tab + (p.size - 1), tab);
}

PointsArray::PointsArray(const std::initializer_list<Point>& list) {
	nbr_inside = size = list.size();
	tab = new Point[size];
	std::copy(list.begin(), list.end(), tab);
}

PointsArray& PointsArray::operator =(const PointsArray& p) {
	nbr_inside = p.nbr_inside;
	size = p.size;
	tab = new Point[size];
	std::copy(p.tab, p.tab + (p.size - 1), tab);
	return *this;
}
