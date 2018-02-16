#include "PointsArray.h"

#include <algorithm>
#include <cmath>
#include <boost/math/constants/constants.hpp>

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

inline Point& PointsArray::operator [](std::size_t n) const {
	return tab[n];
}

PointsArray::PointsArray(const PointsArray& p) {
	nbr_inside = p.nbr_inside;
	size = p.size;
	tab = new Point[size];
	std::copy(p.tab, p.tab + (p.size - 1), tab);
}

PointsArray::PointsArray(const std::initializer_list<Point>& list) {
	nbr_inside = size = static_cast<int>(list.size());
	tab = new Point[size];
	std::copy(list.begin(), list.end(), tab);
}

PointsArray::PointsArray(int n, int c, int r) :
		size(n), nbr_inside(n) {
	int x, y;
	double theta;
	tab = new Point[size];
	for (int i = 0; i < n; ++i) {
		theta = (boost::math::constants::pi<double>() * 2) / (n * i);
		x = static_cast<int>(c + r * cos(theta));
		y = static_cast<int>(c + r * sin(theta));
		tab[i] = Point(x, y);
	}
}

PointsArray& PointsArray::operator =(const PointsArray& p) {
	nbr_inside = p.nbr_inside;
	size = p.size;
	tab = new Point[size];
	std::copy(p.tab, p.tab + (p.size - 1), tab);
	return *this;
}
