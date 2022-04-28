#include "alg.h"
double verM1(const double a, const double b, double n) {
	
	return (((n + a) / -b) + sqrt(pow(sin(a), 2) - cos(n)));
}
double verM2(const double a, const double b, double n) {
	cout << "z";
	return (pow(b, 2) + tan(n * a));
}
double verM3(const double a, const double b, double n) {
	
	return (pow(b, 3) + n * pow(a, 2.0));
}
double verN1(const double a, const double b) {
	return (pow(a - b, 1.0/3.0));
}
double verN2(const double a, const double b) {
	return (pow(a, 2) + (a - b) / (sin(a * b)));
}
double (*versionsN(const double a, const double b))(const double a, const double b) {
	if (a >= b) {
		return verN1;
	}
	if (a < b) {
		return verN2;
	}
}
double (*versionsM(double n, double b))(const double a, const double b, double n) {
	if (n < b) {
		return verM1;
	}
	if (n == b) {
		return verM2;
	}
	if (n > b) {
		return verM3;
	}
}