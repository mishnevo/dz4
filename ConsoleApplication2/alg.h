#pragma once
#include <iostream>
#include <cmath>
using namespace std;
double verM1(const double a, const double b, double n);
double verM2(const double a, const double b, double n);
double verM3(const double a, const double b, double n);
double verN1(const double a, const double b);
double verN2(const double a, const double b);
double (*versionsN(const double a, const double b))(const double a, double b);
double (*versionsM(const double a, const double b))(const double a, const double b, double n);