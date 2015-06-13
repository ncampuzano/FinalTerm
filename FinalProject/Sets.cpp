#include"Integer.h"
#include"Integer_Array.h"
#include"Char_Array.h"
#include<iostream>
using namespace std;

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
    case 1:Turns();break;
    case 2:Direction();break;
  };
};
