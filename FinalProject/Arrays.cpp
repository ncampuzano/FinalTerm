#include"Char.h"
#include<iostream>
#include"GlobalFunctions.h"
#include"Real.h"
#include"Integer.h"
#include"Integer_Array.h"
#include"Char_Array.h"

using namespace std;
void SumArray(){
  write_line(cout);
  write_character_array(cout, "What is the array size?: ");
  integer n = read_integer(cin);
  writeln_character_array(cout, "Write the elements of integer array");
  integer_array result = read_integer_array(cin, n);
  write_character_array(cout, "The sum of array is: ");
  write_integer(cout, sumIntegerArray(result,n));
};
void Average(){
  write_line(cout);
  write_character_array(cout, "What is the array size?: ");
  integer n = read_integer(cin);
  writeln_character_array(cout, "Write the elements of integer array");
  integer_array result = read_integer_array(cin, n);
  write_character_array(cout, "The average of array is: ");
  write_real(cout, averageIntegerArray(result,n));
};
void Product(){
  write_line(cout);
  write_character_array(cout, "What is the array size?: ");
  integer n = read_integer(cin);
  writeln_character_array(cout, "Write the elements of first integer array");
  integer_array first = read_integer_array(cin, n);
  writeln_character_array(cout, "Write the elements of second integer array");
  integer_array second = read_integer_array(cin, n);
  write_character_array(cout, "The product of arrays is: ");
  write_integer(cout, productTwoIntegerArrya(first,second,n));
};
void Maximum(){
  write_line(cout);
  write_character_array(cout, "What is the array size?: ");
  integer n = read_integer(cin);
  writeln_character_array(cout, "Write the elements of integer array");
  integer_array result = read_integer_array(cin, n);
  write_character_array(cout, "The maximum number in array is: ");
  write_integer(cout, maxIntegerArray(result,n));
};
void Minimum(){
  write_line(cout);
  write_character_array(cout, "What is the array size?: ");
  integer n = read_integer(cin);
  writeln_character_array(cout, "Write the elements of integer array");
  integer_array result = read_integer_array(cin, n);
  write_character_array(cout, "The minimum number in array is: ");
  write_integer(cout,  minIntegerArray(result,n));
};
void Direct(){
  write_line(cout);
  write_character_array(cout, "What is the array size?: ");
  integer n = read_integer(cin);
  writeln_character_array(cout, "Write the elements of first integer array");
  integer_array first = read_integer_array(cin, n);
  writeln_character_array(cout, "Write the elements of second integer array");
  integer_array second = read_integer_array(cin, n);
  write_character_array(cout, "The direct product of arrays is: ");
  write_integer_array(cout, directProductIntegerArray(first,second,n),n, " , ");
};
void Zeros(){

};
void ArrayTo(){

};
void NumberTo(){

};
void Arrays(){
  write_line(cout);
  writeln_character_array(cout, "Choose the problem");
  writeln_character_array(cout, "1. Sum elements in integer array");
  writeln_character_array(cout, "2. Average elements in integer array");
  writeln_character_array(cout, "3. Product between two integer arrays");
  writeln_character_array(cout, "4. Maximum element in integer array");
  writeln_character_array(cout, "5. Minimum element in integer array");
  writeln_character_array(cout, "6. Direct between two integer arrays");
  writeln_character_array(cout, "7. Zeros in integer array");
  writeln_character_array(cout, "8. Array to number");
  writeln_character_array(cout, "9. Number to array");
  option optionNumber = read_option(cin);
  switch(optionNumber){
    case 1:SumArray();break;
    case 2:Average();break;
    case 3:Product();break;
    case 4:Maximum();break;
    case 5:Minimum();break;
    case 6:Direct();break;
    case 7:Zeros();break;
    case 8:ArrayTo();break;
    case 9:NumberTo();break;
  };
};
