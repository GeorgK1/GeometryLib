#ifndef POINT2_H
#define POINT2_H

// Comment this for documentation!

#include <iostream>
#include <cmath>
using std::ostream;

class Point2 {

public:
    ///Default member initialization
	float x = 0;
	float y = 0;

	Point2() = default;
    ///Initialization with values
	Point2(float nx, float ny);

    ///First point distance from second point
	float distanceFrom (Point2 p) const;
};

///Operator overloading to get nicer output
ostream& operator<<(ostream& out, const Point2& p);
#endif
