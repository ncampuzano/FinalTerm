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
integer_array read_integer_array(istream& is, integer n);
integer_array read_integer_array_floors(istream& is, integer n);
set_integer read_set_integer(istream& is, integer n);
ostream& write_set_integer(ostream& os, set_integer x, integer n);
ostream& write_integer_array(ostream& os, integer_array x, integer n, character_array separator);

//Analyzers
 /**
  * Recursive Method
  * This function take a number and convert to array of ones and zeros.
  * @param nubmber, x, n and position
  * @return array of numbers with max size 1024
  */
integer_array converToBinary(integer number, integer_array x, integer n, integer position) ;
set_integer unionSets(set_integer x, integer n, set_integer y, integer m);
set_integer intersectionSets(set_integer x, integer n, set_integer y, integer m);
set_integer differenceSets(set_integer x, integer n, set_integer y, integer m);
set_integer symmetricDifferenceSets(set_integer x, integer n, set_integer y, integer m);



#endif // INTEGER_ARRAY_H_INCLUDED
