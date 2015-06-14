#ifndef INTEGER_MATRIZ_H_INCLUDED
#define INTEGER_MATRIZ_H_INCLUDED

#include "Definitions.h"
#include<iostream>
using namespace std;

integer_matriz create_integer_matriz(integer n, integer m);

integer_matriz read_integer_matriz( istream& is, integer n, integer m );
ostream& write_integer_matriz(ostream& os, integer_matriz x, integer n, integer m);

integer_matriz sumIntegerMatriz(integer_matriz x, integer_matriz y, integer n, integer m);
integer_matriz multiplyIntegerMatriz(integer_matriz x, integer_matriz y, integer n, integer m);

#endif // INTEGER_MATRIZ_H_INCLUDED
