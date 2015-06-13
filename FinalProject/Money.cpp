#include "Problems_Library.h"
#include "GlobalFunctions.h"
#include "Char_Array.h"
#include "Integer.h"
void Weigh(){
  writeln_character_array(cout, "How many coins do you have?");
  integer number = read_positive_number(cin);
  write_character_array(cout, "You have to weigh: ");
  write_integer(cout, howToWeight(number));
  write_character_array(cout, " times.");
};

void Money(){
  write_line(cout);
  writeln_character_array(cout, "Choose the problem");
  writeln_character_array(cout, "1. How many weighed I do?");
  option optionNumber = read_option(cin);
  switch(optionNumber){
    case 1:Weigh();break;
  };
};
