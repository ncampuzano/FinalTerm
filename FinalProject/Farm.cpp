#include "Problems_Library.h"
#include "Char_Array.h"
#include "Integer.h"
#include "GlobalFunctions.h"

void LegsInFarm(){
  write_line(cout);
  writeln_character_array(cout,"Enter the number of next animals");
  integer horses = read_positive_number_txt(cin, "Horses: ");
  integer ducks = read_positive_number_txt(cin, "Ducks: ");
  integer scorpions = read_positive_number_txt(cin, "Scorpions: ");
  write_character_array(cout, "In the farm there are: ");
  write_integer(cout, howManyLegs(ducks,scorpions,horses));
  writeln_character_array(cout, " legs");
};

void Eggs(){
  write_line(cout);
  writeln_character_array(cout, "How many hens you have?");
  integer hens = read_positive_number(cin);
  write_character_array(cout, "In the farm produce: ");
  write_integer(cout, howManyEggs(hens));
  writeln_character_array(cout, " eggs daily");
};
void Milk(){
  write_line(cout);
  writeln_character_array(cout,"Enter the number of next animals");
  integer cows = read_positive_number_txt(cin, "Cows: ");
  integer goats = read_positive_number_txt(cin, "Goats: ");
  write_character_array(cout, "Produce ");
  write_integer(cout, how_much_milk_cows(cows));
  write_character_array(cout, " bottles of cow milk and  ");
  write_integer(cout, how_much_milk_goats(goats));
  writeln_character_array(cout, " bottles of goats milk");
};

void Farm(){
    write_line(cout);
    writeln_character_array(cout, "Choose the problem");
    writeln_character_array(cout, "1. How many legs there on farm?");
    writeln_character_array(cout, "2. How many eggs farm produce?");
    writeln_character_array(cout, "3. How much milk farm produce?");
    option optionNumber = read_option(cin);
    switch(optionNumber){
      case 1:LegsInFarm();break;
      case 2:Eggs();break;
      case 3:Milk();break;
    };

};
