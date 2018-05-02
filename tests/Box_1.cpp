// Box.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Box {
	public:
		double length;
		double breadth;
		double height;
		double getVolume() {
			return (length * breadth * height);
		}
};

int main()
{
	Box Box1;
	Box Box2;
	double volume = 0.0;

	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breadth = 7.0;

	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.breadth = 13.0;

	volume = Box1.getVolume();
	cout << "Volume of Box1: " << volume << endl;

	volume = Box2.getVolume();
	cout << "Volume of Box2: " << volume << endl;
    return 0;
}

