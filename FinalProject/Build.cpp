#include "Problems_Library.h"
#include "GlobalFunctions.h"
#include "Integer.h"
#include "Char_Array.h"
#include "Real_Array.h"
#include "Real.h"

void Hall(){
  write_line(cout);
  writeln_character_array(cout, "How many meters the hall has?");
  integer meters = read_positive_number(cin);
  write_character_array(cout, "There are: ");
  write_integer(cout, differentForms(meters));
  writeln_character_array(cout, " different forms");
};
void Brigde(){
  write_line(cout);
  writeln_character_array(cout, "How many meters the river has?");
  real meters = read_real(cin);
  writeln_character_array(cout, "Cost of material:");
  real tons = read_real(cin);
  writeln_character_array(cout, "Is the two-lane bridge");
  writeln_character_array(cout, "1. Yes");
  writeln_character_array(cout, "2. No");
  boolean doubleLane = false;
  option optionNumberBool = read_option(cin);
  switch(optionNumberBool){
      case 1:doubleLane = true;break;
      case 2:doubleLane = false;break;
  };
  write_character_array(cout, "The cost of bridge is: ");
  write_real(cout, costBridge(doubleLane, tons, meters));
};
void Wall(){
  write_line(cout);
  writeln_character_array(cout, "Dimensions of wall");
  square wall = read_square(cin);
  writeln_character_array(cout, "Dimensions of brick");
  square brick = read_square(cin);
  writeln_character_array(cout, "Thick cement");
  real cement = read_real(cin);
  writeln_character_array(cout, "The amount of bricks are: ");
  write_integer(cout, idealWall(wall,brick,cement));
};
void Build(){
    write_line(cout);
    writeln_character_array(cout, "Choose the problem");
    writeln_character_array(cout, "1. How many ways the hall is built?");
    writeln_character_array(cout, "2. Building a bridge");
    writeln_character_array(cout, "3. Building a wall");
    option optionNumber = read_option(cin);
    switch(optionNumber){
      case 1:Hall();break;
      case 2:Brigde();break;
      case 3:Wall();break;
    };
};
