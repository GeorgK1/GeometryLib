#include "point2.h"


Point2::Point2(float nx, float ny)
        : x{nx},
          y{ny} {
}

float Point2::distanceFrom(Point2 p) const {
    ///Using Pythagoras theorem to figure out the distance between 2 points.
    float left = pow((p.x - x), 2);
    float right = pow((p.y - y), 2);
    return sqrt(left + right);
}

ostream &operator<<(ostream &out, const Point2 &p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}