#ifndef BOOL_H_INCLUDED
#define BOOL_H_INCLUDED
#include<iostream>
#include "Definitions.h"
using namespace std;

//Persistent
boolean read_direction_gear(istream& is);

//Analyzers
boolean isStringPalindrome(character_array txt, integer n);
boolean isPhrasePalindrome(character_array txt, integer n);
boolean isSubString(character_array sub, integer n, character_array txt, integer j);
boolean isFormed(character_array txt, integer n, character_array sub, integer m);
boolean directionGear(boolean x, integer a, integer b);
boolean isPoint(point x, point y, point z);
boolean isLine(point x, point y, point z);
boolean isTriangle(point x, point y, point z);


#endif // BOOL_H_INCLUDED
