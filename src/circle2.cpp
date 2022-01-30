//
// Created by Georg on 30.01.2022.
//

#include "circle2.h"

Circle2::Circle2(Point2 np1, float nr) : p1{np1}, r{nr} {

}

float Circle2::circumference() {
    return std::numbers::pi * 2 * r;
}

float Circle2::area() {
    return pow(std::numbers::pi, 2) * r;
}

void Circle2::scale(float factor) {
    r *= factor;
}


ostream &operator<<(ostream &out, const Circle2 &c) {
    out <<  c.p1 << ", " << c.r ;
    return out;
}