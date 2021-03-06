#ifndef INTEGER_H_INCLUDED
#define INTEGER_H_INCLUDED
#include<iostream>
#include "Definitions.h"
using namespace std;


//Persistent
integer read_integer(istream& is);
option read_option(istream& is);
integer read_positive_zero_number(istream& is);
integer read_positive_number(istream& is);
integer read_positive_number_txt(istream& is, character_array txt);
ostream& write_integer(ostream& os, integer n);


//Analyzers
integer cuadrado(integer number);
integer menorNumber(integer_array x, integer n);
integer length(character_array txt);
integer letterInWord(character letter, character_array txt, integer n);
integer counterLetters(character_array txt, character letter, integer n);
integer howManyLegs(integer ducks, integer scorpions, integer horses);
integer howManyEggs(integer hens); //Review before
integer howLegsChair(integer_array x, integer n);
integer how_much_milk_cows(integer cows);
integer how_much_milk_goats(integer goats);
integer howManyMarkes(integer_array x, integer n);
integer howManyNewBirds(integer x, integer eggs);
integer howManyTurns(integer_array x, integer n, integer a, integer b);
integer howToWeight(integer n);
integer idealWall(real_array well, real_array brick, real cement);
integer differentForms(integer lengthMeters);
integer triangleType(real a, real b, real c);
integer triangleTypeAngle(real a, real b, real c);
integer cubeInsideOtherCube(integer n, integer m);
integer indexChar(character letter, character_array x, integer n);
integer sumColIntegerMatriz(integer_matriz x, integer n, integer col);
integer sumRowIntegerMatriz(integer_matriz x, integer m, integer row);
integer sumFirstDiagIntegerMatriz(integer_matriz x, integer n, integer m);
integer sumSecondDiagIntegerMatriz(integer_matriz x, integer n, integer m);
integer multiplyRowWithColIntegerMatriz(integer_matriz x, integer_matriz y, integer row, integer col, integer n);
integer sumIntegerArray(integer_array x, integer n);
integer productTwoIntegerArrya(integer_array x, integer_array y, integer n);
integer minIntegerArray(integer_array x, integer n);
integer maxIntegerArray(integer_array x, integer n);
integer converToNumber(integer_array x, integer n);

#endif // INTEGER_H_INCLUDED
