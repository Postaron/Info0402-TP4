#ifndef POINTSARRAY_H_
#define POINTSARRAY_H_

#include <cstddef>

#include "Point.h"

class PointsArray {
public:
	PointsArray(int size);
	virtual ~PointsArray();
	bool empty();
	int getSize() const;
	Point& get(int i) const;
	Point& operator[](size_t n);
	Point& operator[](size_t n) const;

private:
	int size;
	int nbr_inside;
	Point* tab;
};

#endif /* POINTSARRAY_H_ */
