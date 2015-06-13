#ifndef BOOL_ARRAY_H_INCLUDED
#define BOOL_ARRAY_H_INCLUDED
#include "Definitions.h"
#include<iostream>
using namespace std;



//Constructors
boolean_array_true create_boolean_array_true(integer n);
boolean_array create_boolean_array(integer n);
ostream& write_boolean_array_eratostenes(ostream& os, boolean_array a, integer n);

//Analyzers
boolean_array criba_eratostenes(integer n);
boolean_array criba(boolean_array a, integer n, integer k);


#endif // BOOL_ARRAY_H_INCLUDED
