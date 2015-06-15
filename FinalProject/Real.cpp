#include<math.h>
#include"Real.h"
#include"Integer.h"
#include"Real_Array.h"
#include"Char_Array.h"
#include<iostream>
using namespace std;
#define pi 3.1416
ostream& write_real(ostream& os, real r){
  os << r;
  return os;
};
real read_real(istream& is){
  real result;
  is>>result;
  return result;
};
real converToNumber(real_array x, integer n){
  if(n == 0){
    return x[n] * pow(2,n);
  }else{
    return x[n] * pow(2,n) + converToNumber(x, n-1);
  };
};
real costBridge(boolean doubleLane, real materialCost, real meters){
  if(doubleLane){
    return meters * 8 * materialCost;
  }else{
    return (meters * 8 * 2 * materialCost) * 0.2;
  };
};
real realWellRecursive(real well, real brick, real cement){
    if(well - brick >= 0){
      if(well - brick <= cement){
        return 1;
      }else{
        return 1 + realWellRecursive(well - cement - brick, brick, cement);
      };
    }else{
      return brick / well;
    };
};
real realWell(real_array well, real_array brick, real cement){
   real width = realWellRecursive(well[0], brick[0], cement / 2);
   real height = realWellRecursive(well[1], brick[1], cement / 2);
   return width * height;
};
real distance(point x, point y){
  return sqrt(pow(x[0] - y[0],2) + pow(x[1] - y[1],2));
};
real slope(point x, point y){
  if(x[0] - y[0] == 0){
    return -1;
  };
  return (x[1] - y[1]) / (x[0] - y[0]);
};
real slopePerpendicular(real m){
  if(m == 0){
    return 0;
  };
  return -(1/m);
};
real areaOfTriangle(point x, point y, point z){
  real base = distance(x,y);
  double* point = new double[2];
  double slopeN = slope(x,y);
  double slopeP = slopePerpendicular(slopeN);
  point = intersection(slopeN, x, slopeP, z);
  real height = distance(point, z);
  return (base * height) / 2;
};
real angleABC(real a, real b, real c){
  real x = (pow(a,2) + pow(c,2) - pow(b,2)) / (2 * a * c);
  real B = pi/2 - x - (1/2 * (pow(x, 3) / 3)) - (1/2 * (1/3) * (pow(x,5) / 5));
  return B * (pi/180);
};
real yCoordinate(real m, point pointZ, real x){
  real y = m * x - (m * pointZ[0] + pointZ[1]);
  return y;
};
real log_b(real x, real b){
  return log(x)/log(b);
};
real evaluatePolynomial(polynomial x, integer n, real xValue){
  if(n == 0){
    return x[0];
  }else{
    return  x[n]*pow(xValue, n) + evaluatePolynomial(x, n-1, xValue);
  };
};
real sumPolynomials(polynomial x, integer n, polynomial y, integer m, real xValue){
  return evaluatePolynomial(x, n, xValue) + evaluatePolynomial(y, m, xValue);
};
real restPolynomials(polynomial x, integer n, polynomial y, integer m, real xValue){
  return evaluatePolynomial(x, n, xValue) - evaluatePolynomial(y, m, xValue);
};
real multiplyPolynomials(polynomial x, integer n, polynomial y, integer m, real xValue){
  return evaluatePolynomial(x, n, xValue) * evaluatePolynomial(y, m, xValue);
};
real dividePolynomials(polynomial x, integer n, polynomial y, integer m, real xValue){
   real xEvaluated = evaluatePolynomial(x, n, xValue);
   real yEvaluated = evaluatePolynomial(y, m, xValue);
   if(yEvaluated == 0){
     return -1;
   };
   return xEvaluated / yEvaluated;
};
real residuePolynomials(polynomial x, integer n, polynomial y, integer m, real xValue){
  return fmod(evaluatePolynomial(x, n, xValue), evaluatePolynomial(y, m, xValue));
};
real averageIntegerArray(integer_array x, integer n){
  return sumIntegerArray(x,n) /n;
};
