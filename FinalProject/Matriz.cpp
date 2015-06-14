#include"Problems_Library.h"
#include"Integer_Matriz.h"
#include"Char_Array.h"
#include"Integer.h"
#include"GlobalFunctions.h"
#include"Bool.h"
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
void MultiplyMatriz(){
  writeln_character_array(cout, "Give me, first rows and second columns for matriz");
  integer n = read_positive_zero_number(cin);
  integer m = read_positive_zero_number(cin);
  writeln_character_array(cout, "First matriz: ");
  integer_matriz firstMatriz = read_integer_matriz(cin, n, m);
  writeln_character_array(cout, "Second matriz: ");
  integer_matriz secondMatriz = read_integer_matriz(cin, n, m);
  write_integer_matriz(cout, multiplyIntegerMatriz(firstMatriz, secondMatriz,n,m),n,m);
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
void SumDiag(){
  writeln_character_array(cout, "Give me, first rows and second columns for matriz");
  integer n = read_positive_zero_number(cin);
  integer m = read_positive_zero_number(cin);
  writeln_character_array(cout, "The matriz: ");
  integer_matriz firstMatriz = read_integer_matriz(cin, n, m);
  write_character_array(cout, "First diagonal: ");
  write_integer(cout, sumFirstDiagIntegerMatriz(firstMatriz,n,m));
  writeln_character_array(cout, "");
  write_character_array(cout, "Second diagonal: ");
  write_integer(cout, sumSecondDiagIntegerMatriz(firstMatriz,n,m));
};
void IsMagic(){
  writeln_character_array(cout, "Give me, first rows and second columns for matriz");
  integer n = read_positive_zero_number(cin);
  integer m = read_positive_zero_number(cin);
  writeln_character_array(cout, "The matriz: ");
  integer_matriz matriz = read_integer_matriz(cin, n, m);
  if(isMagicIntegerMatriz(matriz,n,m)){
    writeln_character_array(cout, "The matriz is magic :D");
  }else{
    writeln_character_array(cout, "The matriz is not magic :(");
  };
};
void ReeplaceMatriz(){
  writeln_character_array(cout, "Give me, first rows and second columns for matriz");
  integer n = read_positive_zero_number(cin);
  integer m = read_positive_zero_number(cin);
  writeln_character_array(cout, "The matriz: ");
  integer_matriz matriz = read_integer_matriz(cin, n, m);
  write_character_array(cout, "Give me the number to evaluate: ");
  integer number = read_integer(cin);
  write_integer_matriz(cout, reeplaceMatriz(matriz,n,m,number),n,m);
};
void Matriz(){
  write_line(cout);
  writeln_character_array(cout, "Choose the problem");
  writeln_character_array(cout, "1. Sum of matrices");
  writeln_character_array(cout, "2. Multiply matrices");
  writeln_character_array(cout, "3. Sum of column");
  writeln_character_array(cout, "4. Sum of row");
  writeln_character_array(cout, "5. Sum of diagonals");
  writeln_character_array(cout, "6. Is Magic?");
  writeln_character_array(cout, "7. Replace matriz with ones and zeros");
  option optionNumber = read_option(cin);
  switch(optionNumber){
    case 1:SumMatriz();break;
    case 2:MultiplyMatriz();break;
    case 3:SumColMatriz();break;
    case 4:SumRowMatriz();break;
    case 5:SumDiag();break;
    case 6:IsMagic();break;
    case 7:ReeplaceMatriz();break;
  };
};
