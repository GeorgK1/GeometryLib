//
// Created by Georg on 30.01.2022.
//

#ifndef CIRCLE2_H
#define CIRCLE2_H

#include <iostream>
#include "point2.h"
#include <numbers>
#include <line2.h>

class Circle2 {
public:
    ///Radius of the circle
    float r = 0;
    ///Start point of the circle
    Point2 p1;

    Circle2() = default;

    Circle2(Point2 np1, float nr);

    float circumference();

    float area();


    void scale(float factor);


};

///Operator overloading to get nicer output
ostream &operator<<(ostream &out, const Circle2 &p);


#endif //CIRCLE2_H
