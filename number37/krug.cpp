#include "krug.h"

krug::krug() {
	radius = 0;
}

krug::~krug() {

}

void krug::setR(double rad) {
	this->radius = rad;
}

double krug::getR() {
	int rad = this->radius;
	return rad;
}
double krug::getPl() {
	return Pi * pow(radius, 2);
}

double krug::getL() {
	return 2 * Pi * this->radius;
}
