#include"Char.h"
#include<iostream>
#include"GlobalFunctions.h"
#include"Real.h"
#include"Integer.h"
#include"Integer_Array.h"
#include"Char_Array.h"

using namespace std;

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
  writeln_character_array(cout, "9. Array to number");
  writeln_character_array(cout, "8. Number to array");
  option optionNumber = read_option(cin);
  switch(optionNumber){
  };
};
