#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include"Definitions.h"
#include<iostream>
using namespace std;

//Constructors
character_array create_character_array(integer n);
//Destructor
void  remove_character_array(character_array n);
//Persistent
character_array read_character_array(istream& is);
ostream& write_character_array(ostream& os, character_array a);
ostream& writeln_character_array(ostream& os, character_array a);

//Analyzer
character_array switchString(character_array txt, integer n);
character_array moveOnePlaceToLeft(character_array txt, integer n);
character_array moveOnePlaceToRight(character_array txt, integer n);
character_array encodeString(character_array txt, integer n, character_array code);
character_array decodeString(character_array txt, integer n, character_array code);
character_array investString(character_array txt, integer n);



#endif // STRING_H_INCLUDED
