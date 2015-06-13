#ifndef INTEGER_ARRAY_H_INCLUDED
#define INTEGER_ARRAY_H_INCLUDED

#include "Definitions.h"
#include <iostream>
using namespace std;
//Constructors
integer_array create_integer_array(integer n);
set_integer create_set_integer(integer n);

//Persistent
integer_array read_integer_array_positive_txt(istream& is, integer n, character_array txt);
set_integer read_set_integer(istream& is, integer n);

//Analyzers
 /**
  * Recursive Method
  * This function take a number and convert to array of ones and zeros.
  * @param nubmber, x, n and position
  * @return array of numbers with max size 1024
  */
integer_array converToBinary(integer number, integer_array x, integer n, integer position) ;

#endif // INTEGER_ARRAY_H_INCLUDED
