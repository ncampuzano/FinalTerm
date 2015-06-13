#ifndef REAL_ARRAY_H_INCLUDED
#define REAL_ARRAY_H_INCLUDED

#include "Definitions.h"
#include<iostream>
using namespace std;


//Constructors
point create_point();
bisector create_bisector();
square create_square();
polynomial create_polynomial(integer n);

//Persistent
point read_point(istream& is);
square read_square(istream& is);
polynomial read_polynomial(istream& is, integer n);
ostream& write_polynomial(ostream& os, polynomial x, integer n);
ostream& write_bisector(ostream& os, bisector x);


//Analyzers
point intersection(real m, point x, real mP, point y);
point baseAndHeight(point x, point y, point z);
bisector bisectorABC(point x, point y, point z);
#endif // REAL_ARRAY_H_INCLUDED
