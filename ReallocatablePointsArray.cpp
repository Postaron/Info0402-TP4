#include "ReallocatablePointsArray.h"

#include <utility>

#include "Point.h"

ReallocatablePointsArray::ReallocatablePointsArray(int size = 10) :
		PointsArray(size) {

}

ReallocatablePointsArray::~ReallocatablePointsArray() {
}

void ReallocatablePointsArray::push_back(Point& p) {
	Point* tempTab = nullptr;
	if (size == nbr_inside) {
		size += 5;
		tempTab = tab;
		tab = new Point[size];
		std::swap(tab, tempTab);
		delete tempTab;
	}
	PointsArray::push_back(p);
}
