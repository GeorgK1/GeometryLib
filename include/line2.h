//
// Created by Georg on 30.01.2022.
//

#ifndef LINE2_H
#define LINE2_H

#include <iostream>
#include "point2.h"

using std::ostream;

class Line2 {
public:
    Point2 p1{0,0};
    Point2 p2{1,-1};

    Line2() = default;

    Line2(Point2 np1, Point2 np2);
    float length();

};
ostream& operator<<(ostream& out, const Line2& l);
#endif //LINE2_H
