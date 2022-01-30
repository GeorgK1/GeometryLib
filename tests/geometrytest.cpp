#include <iostream>
#include <cstdlib>
#include <cmath> //fabs
#include "geometry.h"

using namespace std;

int testcount = 0;
#define TEST2(a,b1,c1,b2,c2) cout << "Test " << ++testcount << ". " << (a) << ": " << ((cmpf(b1,b2) && cmpf(c1,c2)) ? "OK" :"FAIL") << endl

bool cmpf (float a, float b) {
	if (fabs (a - b) < 0.001f) 
		return true;
	return false;
}

int main (int argc, char* argv[]) {

	// Point2
	cout << "--Testi klassi Point2" << endl;
	// Require default constructor 
	Point2 v1;
	// Require public coordinates x and y
	cout << v1.x << " " << v1.y << endl;
	// Testi Point2 vaikekonstruktorit
	TEST2("Point2 vaikekonstruktor v1(0,0)", v1.x, v1.y, 0, 0);
	// Require constructor with two parameters
	Point2 v2 {3.0, 4.0}; // c++11
	TEST2("Point2 konstruktor v2(1,-1)", v2.x, v2.y, 1, -1);
	// TODO: lisa oma testid
	// Require distanceFrom method
	cout << v1.distanceFrom(v2) << endl;
	// Require operator <<
	cout << v1 << endl;

	// Line2
	// Require default constructor
	Line2 l1;
	// Require public points p1 and p2
	cout << l1.p1 << "-" << l1.p2 << endl;
	// Require constructor with two parameters
	Line2 l2 {v1, v2};
	// Require method length
	cout << l2.length() << endl;
	// Require operator <<
	cout << l1 << endl;

	// Circle2
	// Require default constructor
	Circle2 c1;
	// Require variable p1
	cout << c1.p1 << endl;
	// Require variable r
	cout << c1.r << endl;
	// Require constructor with point and a radius
	Circle2 c2 {v1, 1.0};
	// Require method circumference
	float f = c1.circumference();
	// Require method area
	f = c1.area();
	// Require method contains(Point2)
	// Require method scale
	c1.scale(1.0);
	// Require operator <<
	cout << c1 << endl;



	cout << "Testide arv: " << testcount << endl;
	return EXIT_SUCCESS;
}
