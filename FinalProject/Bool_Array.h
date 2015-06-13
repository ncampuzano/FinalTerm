#ifndef BOOL_ARRAY_H_INCLUDED
#define BOOL_ARRAY_H_INCLUDED
#include"Definitions.h"
#include<iostream>
using namespace std;
boolean_array create_boolean_array(integer n);
boolean_array_true create_boolean_array_true(integer n);
ostream& write_boolean_array_eratostenes(ostream& os, boolean_array a, integer n);

boolean_array remove_multiply(boolean_array a, integer n, integer p);
boolean_array criba(boolean_array a, integer n, integer k);
boolean_array criba_eratostenes(integer n);




#endif // BOOL_ARRAY_H_INCLUDED
