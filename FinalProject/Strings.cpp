#include "Problems_Library.h"
#include "GlobalFunctions.h"
#include "Char_Array.h"
#include "Integer.h"
#include "Char.h"
#include "Bool.h"

void Substring(){
  write_line(cout);
  writeln_character_array(cout, "Give me, substring (not greater than 1024 characters): ");
  cin.ignore();
  character_array sub = read_character_array(cin);
  writeln_character_array(cout, "Give me, string (not greater than 1024 characters): ");
  character_array compString = read_character_array(cin);
  integer lenSub = length(sub);
  integer lenCompString  = length(compString);
  if(lenSub > lenCompString){
    writeln_character_array(cout, "The substring is more than string");
    return;
  };
  if(isSubString(sub,lenSub,compString,lenCompString)){
    writeln_character_array(cout, "Is really a substring");
  }else{
    writeln_character_array(cout, "Is not really a substring");
  };
};
void Formed(){
  write_line(cout);
  writeln_character_array(cout, "Give me, the string to evaluate (not greater than 1024 characters): ");
  cin.ignore();
  character_array formed = read_character_array(cin);
  writeln_character_array(cout, "Give me, string (not greater than 1024 characters): ");
  character_array compString = read_character_array(cin);
  integer lenFormed = length(formed);
  integer lenCompString  = length(compString);
  if(lenFormed > lenCompString){
    writeln_character_array(cout, "The string to evaluate is more than string");
    return;
  };
  if(isFormed(compString,lenCompString,formed,lenFormed)){
    writeln_character_array(cout, "Is really a formed string");
  }else{
    writeln_character_array(cout, "Is not really formed string");
  };
};
void StringPalindrome(){
  write_line(cout);
  writeln_character_array(cout, "Give me, the string to evaluate (not greater than 1024 characters): ");
  cin.ignore();
  character_array palindrome = read_character_array(cin);
  if(isStringPalindrome(palindrome,length(palindrome))){
    writeln_character_array(cout, "Is palindrome");
  }else{
    writeln_character_array(cout, "Is not palindrome");
  };
};
void PhrasePalindrome(){
  write_line(cout);
  writeln_character_array(cout, "Give me, the phrase to evaluate (not greater than 1024 characters): ");
  cin.ignore();
  character_array phrase = read_character_array(cin);
  if(isPhrasePalindrome(phrase,length(phrase))){
    writeln_character_array(cout, "Is palindrome phrase");
  }else{
    writeln_character_array(cout, "Is not palindrome phrase");
  };
};
void Letters(){
  write_line(cout);
  writeln_character_array(cout, "Give me, the phrase (not greater than 1024 characters): ");
  cin.ignore();
  character_array phrase = read_character_array(cin);
  writeln_character_array(cout, "Give me, the letter to evaluate ");
  character letter = read_character(cin);
  write_character_array(cout, "There are: ");
  write_integer(cout, letterInWord(letter, phrase, length(phrase)));
  writeln_character_array(cout, " in phrase ");
};
void MoveLeft(){
  write_line(cout);
  writeln_character_array(cout, "Give me, the phrase (not greater than 1024 characters): ");
  cin.ignore();
  character_array phrase = read_character_array(cin);
  writeln_character_array(cout, moveOnePlaceToLeft(phrase, length(phrase)));
};
void MoveRight(){
  write_line(cout);
  writeln_character_array(cout, "Give me, the phrase (not greater than 1024 characters): ");
  cin.ignore();
  character_array phrase = read_character_array(cin);
  writeln_character_array(cout, moveOnePlaceToRight(phrase, length(phrase)));
};
void InvestString(){
  write_line(cout);
  writeln_character_array(cout, "Give me, the string to invest (not greater than 1024 characters): ");
  cin.ignore();
  character_array phrase = read_character_array(cin);
  writeln_character_array(cout, investString(phrase, length(phrase)));
};
void EncodeString(){
  write_line(cout);
  writeln_character_array(cout, "Give me, the phrase to encode(not greater than 1024 characters): ");
  cin.ignore();
  character_array phrase = read_character_array(cin);
  writeln_character_array(cout, "Give me, the code: ");
  character_array code = read_character_array(cin);
  writeln_character_array(cout, encodeString(phrase, length(phrase), code));
};
void DecodeString(){
  write_line(cout);
  writeln_character_array(cout, "Give me, the phrase to encode(not greater than 1024 characters): ");
  cin.ignore();
  character_array phrase = read_character_array(cin);
  writeln_character_array(cout, "Give me, the code: ");
  character_array code = read_character_array(cin);
  writeln_character_array(cout, decodeString(phrase, length(phrase), code));
};

void Strings(){
  write_line(cout);
  writeln_character_array(cout, "Choose the problem");
  writeln_character_array(cout, "1. Letters in word");
  writeln_character_array(cout, "2. Is substring?");
  writeln_character_array(cout, "3. Is formed?");
  writeln_character_array(cout, "4. Invest string");
  writeln_character_array(cout, "5. Is string palindrome?");
  writeln_character_array(cout, "6. Is phrase palindrome?");
  writeln_character_array(cout, "7. Move to right");
  writeln_character_array(cout, "8. Move to left");
  writeln_character_array(cout, "9. Encode string");
  writeln_character_array(cout, "10. Decode string");
  option optionNumber = read_option(cin);
  switch(optionNumber){
    case 1:Letters();break;
    case 2:Substring();break;
    case 3:Formed();break;
    case 4:InvestString();break;
    case 5:StringPalindrome();break;
    case 6:PhrasePalindrome;break;
    case 7:MoveRight();break;
    case 8:MoveLeft();break;
    case 9:EncodeString();break;
    case 10:DecodeString();break;
  };
};
