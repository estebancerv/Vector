#include <iostream>
#include "point.h"

using namespace std;

Point::Point(){
	x=0;
	y=0;
}
Point::Point(int tx, int ty){
	x = tx; 
	y = ty;
	}
void Point::printPoint(){
	cout << "(" << x << "," << y << ")" << endl;
	}
int Point::get_x(){
	return x;
	}
int Point::get_y(){
	return y;
	}

