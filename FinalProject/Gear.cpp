#include "Problems_Library.h"
#include "Char_Array.h"
#include "Integer.h"
#include "GlobalFunctions.h"
#include "Integer_Array.h"
#include "Bool.h"

void Turns(){

  write_line(cout);
  writeln_character_array(cout, "We are working on it");

  writeln_character_array(cout, "How many gears you have?");
  integer gears = read_positive_number(cin);
  if(gears == 0){
    writeln_character_array(cout, "You have 0 gears");
    return;
  };
  integer_array gears_array = read_integer_array_positive_txt(cin, gears, "Gears position ");
  writeln_character_array(cout, "How many the first gear did?");
  integer turnsFirst = read_positive_zero_number(cin);
  writeln_character_array(cout, "Which gear you want to evaluate?");
  integer igear = read_positive_number(cin);
  write_character_array(cout, "The gear ");
  write_integer(cout, igear);
  write_character_array(cout, " did ");
  write_integer(cout, howManyTurns(gears_array, gears, igear-1, turnsFirst));
  write_character_array(cout, " turns.");
};
void Direction(){
  write_line(cout);
  writeln_character_array(cout, "What position have your gear?");
  integer firstPosition = read_positive_number(cin);
  writeln_character_array(cout, "What direction rotates the gear?");
  boolean firstDirection = read_direction_gear(cin);
  writeln_character_array(cout, "Which is the position of the gear you want to evaluate?");
  integer secondPosition = read_positive_number(cin);
  if(directionGear(firstDirection,firstPosition,secondPosition) == firstDirection){
    writeln_character_array(cout, "Turn in same direction");
  }else{
    writeln_character_array(cout, "Turn in opposite direction");
  };
};

void Gear(){
  write_line(cout);
  writeln_character_array(cout, "Choose the problem");
  writeln_character_array(cout, "1. How many turns?");
  writeln_character_array(cout, "2. Direction of gear");
  option optionNumber = read_option(cin);
  switch(optionNumber){
    case 1:Turns();break;
    case 2:Direction();break;
  };
};
