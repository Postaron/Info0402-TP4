#include <iostream>
#include <type_traits>

#include "Point.h"
#include "ReallocatablePointsArray.h"

using namespace std;

int main(/* int argc, char **argv */) {
	cout << boolalpha;
	cout << "Points : " << is_copy_assignable<Point>::value << " "
			<< is_copy_constructible<Point>::value << endl;
	cout << "PointsArray : " << is_copy_assignable<PointsArray>::value << " "
			<< is_copy_constructible<PointsArray>::value << endl;
	cout << "ReallocatablePointsArray : "
			<< is_copy_assignable<ReallocatablePointsArray>::value << " "
			<< is_copy_constructible<ReallocatablePointsArray>::value << endl;
	return EXIT_SUCCESS;
}
