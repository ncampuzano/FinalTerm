#include"Char.h"
#include<iostream>
using namespace std;

//Persistent
character read_character(istream& is){
  character result;
  is>>result;
  return result;
};
character toLower(character in){
  if(in<='Z' && in>='A')
    return in-('Z'-'z');
  return in;
};
