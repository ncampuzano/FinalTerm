#ifndef REAL_H_INCLUDED
#define REAL_H_INCLUDED
#include "Definitions.h"
#include<iostream>
using namespace std;

//Persistent
real read_real(istream& is);
ostream& write_real(ostream& os, real r);


//Analyzers
real perimeter(real r);
/**
 * Recursive Method
 * This function take an array and return number, where there are ones and zeros.
 * @param x is array of double
 * @param n is large of array
 * @return number that represent the double array
 */
real converToNumber(real_array x, integer n);
real costBridge(boolean doubleLane, real materialCost, real meters);
real realWell(real_array  well, real_array brick, real cement);
real distance(point x, point y);
real areaOfTriangle(point x, point y, point z);
real slope(point x, point y);
real slopePerpendicular(real m);
real angleABC(real a, real b, real c);
real yCoordinate(real m, point pointZ, real x);
real costBridge(boolean doubleLane, real materialCost, real meters);
real evaluatePolynomial(polynomial x, integer n, real xValue);
real sumPolynomials(polynomial x, integer n, polynomial y, integer m, real xValue);
real restPolynomials(polynomial x, integer n, polynomial y, integer m, real xValue);
real multiplyPolynomials(polynomial x, integer n, polynomial y, integer m, real xValue);
real dividePolynomials(polynomial x, integer n, polynomial y, integer m, real xValue);
real residuePolynomials(polynomial x, integer n, polynomial y, integer m, real xValue);

#endif // REAL_H_INCLUDED
