#include"Integer_Matriz.h"
#include"Integer_Array.h"
#include"Char_Array.h"
#include"Integer.h"

integer_matriz create_integer_matriz(integer n, integer m){
    integer_matriz result = new integer_array[n];
    for( int i=0; i<n; i++ ){
        result[i] = create_integer_array(m);
    };
    return result;
};
/*
//Destructoras
void liberar_matriz_entero( matriz_entero A, int n, int m ){
  for( int i=0; i<n; i++ ){
      liberar_arreglo_entero(A[i], m);
  };
  delete[] A;
};*/
ostream& write_integer_matriz(ostream& os, integer_matriz x, integer n, integer m){
    for( int i=0; i < n; i++ ){
        write_integer_array(os, x[i], m, " | ");
        os<<endl;
    };
    return os;
};
integer_matriz read_integer_matriz(istream& is, integer n, integer m ){
    integer_matriz result = create_integer_matriz(n,m);
    for( int i=0; i<n; i++ ){
      write_character_array(cout, "Write items in row ");
      write_integer(cout, i+1);
      write_character_array(cout, "\n");
      result[i] = read_integer_array(is, m);
    };
    return result;
};
integer_matriz sumIntegerMatriz(integer_matriz x, integer_matriz y, integer n, integer m){
  integer_matriz result = create_integer_matriz(n, m);
  for(integer i = 0; i < n; i++){
    for(integer j = 0; j < m; j++){
      result[i][j] = x[i][j] + y[i][j];
    };
  };
  return result;
};
/*integer_matriz multiplyIntegerMatriz(integer_matriz x, integer_matriz y, integer n, integer m){
  integer_matriz result = create_integer_matriz(n, m);
  return result;
};*/



