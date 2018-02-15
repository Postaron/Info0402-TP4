#ifndef POINTSARRAY_H_
#define POINTSARRAY_H_

#include <cstddef>
#include <initializer_list>

#include "Point.h"
#include "Transform.h"

class PointsArray: virtual public Transform {
public:
	PointsArray(int size);
	PointsArray(const PointsArray& p);
	PointsArray(const std::initializer_list<Point>& list);
	PointsArray(int n, int c, int s, int r);
	virtual ~PointsArray();
	bool empty();
	int getSize() const;
	virtual void push_back(Point& p);
	void pop_back();
	inline Point& get(int i) const;
	inline Point& operator[](size_t n) const;
	PointsArray& operator=(const PointsArray& p);

protected:
	int size;
	int nbr_inside;
	Point* tab;
};

#endif /* POINTSARRAY_H_ */
