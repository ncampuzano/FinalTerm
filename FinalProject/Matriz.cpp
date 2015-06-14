#include"Problems_Library.h"
#include"Integer_Matriz.h"
#include"Char_Array.h"
#include"Integer.h"
#include"GlobalFunctions.h"
#include<iostream>
using namespace std;
void SumRowMatriz(){
  writeln_character_array(cout, "Give me, first rows and second columns for matriz");
  integer n = read_positive_zero_number(cin);
  integer m = read_positive_zero_number(cin);
  writeln_character_array(cout, "The matriz: ");
  integer_matriz matriz = read_integer_matriz(cin, n, m);
  writeln_character_array(cout, "Give me, the row to evaluate");
  integer row = read_integer(cin);
  if(row > n){
    writeln_character_array(cout, "Your row is out of range :(");
    return;
  };
  write_character_array(cout, "The value of row is: ");
  write_integer(cout, sumRowIntegerMatriz(matriz, m, row));
};
void SumColMatriz(){
  writeln_character_array(cout, "Give me, first rows and second columns for matriz");
  integer n = read_positive_zero_number(cin);
  integer m = read_positive_zero_number(cin);
  writeln_character_array(cout, "The matriz: ");
  integer_matriz matriz = read_integer_matriz(cin, n, m);
  writeln_character_array(cout, "Give me, the column to evaluate");
  integer col = read_integer(cin);
  if(col > m){
    writeln_character_array(cout, "Your column is out of range :(");
    return;
  };
  write_character_array(cout, "The value of column is: ");
  write_integer(cout, sumColIntegerMatriz(matriz, n, col));
};
void SumMatriz(){
  writeln_character_array(cout, "Give me, first rows and second columns for matriz");
  integer n = read_positive_zero_number(cin);
  integer m = read_positive_zero_number(cin);
  writeln_character_array(cout, "First matriz: ");
  integer_matriz firstMatriz = read_integer_matriz(cin, n, m);
  writeln_character_array(cout, "Second matriz: ");
  integer_matriz secondMatriz = read_integer_matriz(cin, n, m);
  write_integer_matriz(cout, sumIntegerMatriz(firstMatriz, secondMatriz,n,m),n,m);
};

void Matriz(){
  write_line(cout);
  writeln_character_array(cout, "Choose the problem");
  writeln_character_array(cout, "1. Sum of matrices");
  writeln_character_array(cout, "3. Sum of column");
  writeln_character_array(cout, "4. Sum of row");
  option optionNumber = read_option(cin);
  switch(optionNumber){
    case 1:SumMatriz();break;
    case 3:SumColMatriz();break;
    case 4:SumRowMatriz();break;
  };
};
