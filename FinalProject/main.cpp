#include <iostream>
#include "Definitions.h"
#include "Integer.h"
#include "Char_Array.h"
#include "Problems_Library.h"
#include "Bool_Array.h"

using namespace std;

int main()
{
    writeln_character_array(cout, "Welcome, choose an option");
    writeln_character_array(cout, "1. Farms problems");
    writeln_character_array(cout, "2. Building problems");
    writeln_character_array(cout, "3. Gear problems");
    writeln_character_array(cout, "4. Geometrical problems");
    writeln_character_array(cout, "5. Money");
    writeln_character_array(cout, "6. Strings");
    writeln_character_array(cout, "7. Polynomials");
    writeln_character_array(cout, "8. Sets");
    writeln_character_array(cout, "9. Matriz");
    option opt = read_option(cin);
    switch(opt){
      case 1: Farm() ;break;
      case 2: Build() ;break;
      case 3: Gear(); break;
      case 4: Geometrical(); break;
      case 5: Money(); break;
      case 6: Strings(); break;
      case 7: Polynomials();break;
      case 8: Sets();break;
      case 9: Matriz();break;
    };
}
