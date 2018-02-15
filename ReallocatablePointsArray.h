#ifndef REALLOCATABLEPOINTSARRAY_H_
#define REALLOCATABLEPOINTSARRAY_H_

#include "PointsArray.h"

class ReallocatablePointsArray: public PointsArray {
public:
	ReallocatablePointsArray(int size);
	virtual ~ReallocatablePointsArray();
	void push_back(Point& p) override;
};

#endif /* REALLOCATABLEPOINTSARRAY_H_ */
