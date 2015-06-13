#include"Integer.h"
#include"Integer_Array.h"
#include"Char_Array.h"
#include"GlobalFunctions.h"
#include"Problems_Library.h"
#include<iostream>
using namespace std;

void Union(){
  write_line(cout);
  write_character_array(cout, "Give me the number of elements in first set: ");
  integer numberF = read_positive_zero_number(cin);
  set_integer firstSet = read_set_integer(cin, numberF);
  write_character_array(cout, "Give me the number of elements in second set: ");
  integer numberS = read_positive_zero_number(cin);
  set_integer secondSet = read_set_integer(cin, numberS);
  set_integer result = unionSets(firstSet, numberF, secondSet, numberS);
  writeln_character_array(cout, "The union between two sets is: ");
  write_set_integer(cout, result, numberF+numberS);
};
void Intersection(){
  write_line(cout);
  write_character_array(cout, "Give me the number of elements in first set: ");
  integer numberF = read_positive_zero_number(cin);
  set_integer firstSet = read_set_integer(cin, numberF);
  write_character_array(cout, "Give me the number of elements in second set: ");
  integer numberS = read_positive_zero_number(cin);
  set_integer secondSet = read_set_integer(cin, numberS);
  set_integer result = intersectionSets(firstSet, numberF, secondSet, numberS);
  writeln_character_array(cout, "The union between two sets is: ");
  if(numberF <= numberS){
    write_set_integer(cout, result,numberF);
  }else{
    write_set_integer(cout, result,numberS);
  };
};
void Difference(){

};
void SymmetricDifference(){

};
void ItBelongs(){

};
void Content(){

};
void Sets(){
  write_line(cout);
  writeln_character_array(cout, "Choose the problem");
  writeln_character_array(cout, "1. Union");
  writeln_character_array(cout, "2. Intersection");
  writeln_character_array(cout, "3. Difference");
  writeln_character_array(cout, "4. Symmetric difference");
  writeln_character_array(cout, "5. It belongs");
  writeln_character_array(cout, "6. Content");
  option optionNumber = read_option(cin);
  switch(optionNumber){
    case 1:Union();break;
    case 2:Intersection();break;
    case 3:Difference();break;
    case 4:SymmetricDifference();break;
    case 5:ItBelongs();break;
    case 6:Content();break;
  };
};
