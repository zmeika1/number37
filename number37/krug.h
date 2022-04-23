#ifndef KRUG_H
#define KRUG_H

#include <iostream>
#include <cmath>

using namespace std;

const double Pi = 3.1415;

class krug {
private:
	double radius;
public:
	krug();
	~krug();
	void setR(double);
	double getR();
	double getPl();
	double getL();
};

#endif 

