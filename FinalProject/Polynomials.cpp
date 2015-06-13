#include "Problems_Library.h"
#include "Real_Array.h"
#include "Integer.h"
#include "Char_Array.h"
#include "GlobalFunctions.h"
#include "Real.h"
#include <iostream>
using namespace std;

void Evaluate(){
  write_line(cout);
  write_character_array(cout, "Give me, the polynomial level: ");
  integer level = read_positive_zero_number(cin);
  polynomial result = read_polynomial(cin, level);
  write_character_array(cout, "Give me the x value: ");
  real xValue = read_real(cin);
  write_character_array(cout, "The value of polynomial is: ");
  write_real(cout, evaluatePolynomial(result, level, xValue));
};
void Sum(){
  write_line(cout);
  write_character_array(cout, "Give me, the first polynomial level: ");
  integer levelF = read_positive_zero_number(cin);
  polynomial firstPolynomial = read_polynomial(cin, levelF);
  write_character_array(cout, "Give me, the second polynomial level: ");
  integer levelS = read_positive_zero_number(cin);
  polynomial secondPolynomial = read_polynomial(cin, levelS);
  write_character_array(cout, "Give me the x value: ");
  real xValue = read_real(cin);
  write_character_array(cout, "The sum between polynomials is: ");
  write_real(cout, sumPolynomials(firstPolynomial, levelF, secondPolynomial, levelS, xValue));
};
void Rest(){
  write_line(cout);
  write_character_array(cout, "Give me, the first polynomial level: ");
  integer levelF = read_positive_zero_number(cin);
  polynomial firstPolynomial = read_polynomial(cin, levelF);
  write_character_array(cout, "Give me, the second polynomial level: ");
  integer levelS = read_positive_zero_number(cin);
  polynomial secondPolynomial = read_polynomial(cin, levelS);
  write_character_array(cout, "Give me the x value: ");
  real xValue = read_real(cin);
  write_character_array(cout, "The rest between polynomials is: ");
  write_real(cout, restPolynomials(firstPolynomial, levelF, secondPolynomial, levelS, xValue));
};
void Multiply(){
  write_line(cout);
  write_character_array(cout, "Give me, the first polynomial level: ");
  integer levelF = read_positive_zero_number(cin);
  polynomial firstPolynomial = read_polynomial(cin, levelF);
  write_character_array(cout, "Give me, the second polynomial level: ");
  integer levelS = read_positive_zero_number(cin);
  polynomial secondPolynomial = read_polynomial(cin, levelS);
  write_character_array(cout, "Give me the x value: ");
  real xValue = read_real(cin);
  write_character_array(cout, "The multiply between polynomials is: ");
  write_real(cout, multiplyPolynomials(firstPolynomial, levelF, secondPolynomial, levelS, xValue));
};
void Divide(){
  write_line(cout);
  write_character_array(cout, "Give me, the first polynomial level: ");
  integer levelF = read_positive_zero_number(cin);
  polynomial firstPolynomial = read_polynomial(cin, levelF);
  write_character_array(cout, "Give me, the second polynomial level: ");
  integer levelS = read_positive_zero_number(cin);
  polynomial secondPolynomial = read_polynomial(cin, levelS);
  write_character_array(cout, "Give me the x value: ");
  real xValue = read_real(cin);
  real result = dividePolynomials(firstPolynomial, levelF, secondPolynomial, levelS, xValue);
  if(result == -1){
    write_character_array(cout, "The second polynomial is 0, I'm sorry");

  }else{
    write_character_array(cout, "The division between polynomials is: ");
    write_real(cout, result);
  };
};
void Residue(){
  write_line(cout);
  write_character_array(cout, "Give me, the first polynomial level: ");
  integer levelF = read_positive_zero_number(cin);
  polynomial firstPolynomial = read_polynomial(cin, levelF);
  write_character_array(cout, "Give me, the second polynomial level: ");
  integer levelS = read_positive_zero_number(cin);
  polynomial secondPolynomial = read_polynomial(cin, levelS);
  write_character_array(cout, "Give me the x value: ");
  real xValue = read_real(cin);
  write_character_array(cout, "The residue between polynomials is: ");
  write_real(cout, residuePolynomials(firstPolynomial, levelF, secondPolynomial, levelS, xValue));
};
void Polynomials(){
  write_line(cout);
  writeln_character_array(cout, "Choose the problem");
  writeln_character_array(cout, "1. Evaluate");
  writeln_character_array(cout, "2. Sum");
  writeln_character_array(cout, "3. Rest");
  writeln_character_array(cout, "4. Multiply");
  writeln_character_array(cout, "5. Divide");
  writeln_character_array(cout, "6. Residue");
  option optionNumber = read_option(cin);
  switch(optionNumber){
    case 1:Evaluate();break;
    case 2:Sum();break;
    case 3:Rest();break;
    case 4:Multiply();break;
    case 5:Divide();break;
    case 6:Residue();break;
  };
};
