#include"Integer.h"
#include"Bool.h"
#include"Char_Array.h"
#include"Real.h"
#include<iostream>
using namespace std;

boolean read_direction_gear(istream& is){
  boolean result;
  writeln_character_array(cout, "1. Right");
  writeln_character_array(cout, "2. Left");
  option optionNumber = read_option(cin);
  switch(optionNumber){
    case 1:result = true;break;
    case 2:result = false;break;
    default:
        writeln_character_array(cout, "You don't choose possible option, by default the gear turn to right");
        result = true;break;
  };
  return result;
};
boolean matchString(character_array sub, character_array txt, integer n, integer i){
  for(int j = 0; j < n ; j++){
    if(txt[i+j] != sub[j]){
      return false;
    };
  };
  return true;
};
boolean isPhrasePalindrome(character_array txt, integer n){
  integer j = n-1, i = 0;
  for(; (j>=0)||(i<n);){
   if(txt[i] == ' ' || txt[j] == ' '){
     if(txt[i] == ' '){
       i++;
     };
     if(txt[j] == ' '){
       j--;
     };
   }else{
     if(txt[i] == txt[j]){
       i++;
       j--;
     }else{
       return false;
     };
   };
  };
  return true;
};
boolean isStringPalindrome(character_array txt, integer n){
  for(int i = 1; i <= n; i++){
    if(txt[n-i] != txt[i-1]){
      return false;
    };
  };
  return true;
};
boolean isFormed(character_array txt, integer n, character_array sub, integer m){
    for(int i= 0; i < m; i++){
      if(counterLetters(txt, sub[i], n) < counterLetters(sub, sub[i], m)){
        return false;
      };
    };
    return true;
};
boolean isSubString(character_array sub, integer n, character_array txt, integer j){
  for(int i = 0; i+n < j; i++){
    if(matchString(sub, txt, n, i)){
      return true;
    };
  };
  return false;
};
boolean directionGear(boolean x, integer a, integer b){
  if(a % 2 == b % 2){
    return x;
  };
  return !x;
};
boolean isPoint(point x, point y, point z){
  if(x[0] == y[0] && y[0] == z[0] && x[1] == y[1] && y[1] == z[1]){
    return true;
  };
  return false;
};
boolean isLine(point x, point y, point z){
  write_real(cout, distance(x, y));
  writeln_character_array(cout,"");
  write_real(cout, distance(y, z));
  writeln_character_array(cout,"");
  write_real(cout, distance(x, z));
  writeln_character_array(cout,"");
  if(distance(x, y) + distance(y,z) == distance(x,z)
     || distance(x, z) + distance(y,z) == distance(x,y)
     || distance(x, y) + distance(x,z) == distance(y,z)){
    return true;
  };
  return false;
};
boolean isTriangle(point x, point y, point z){
  write_real(cout, distance(x, y));
  writeln_character_array(cout,"");
  write_real(cout, distance(y, z));
  writeln_character_array(cout,"");
  write_real(cout, distance(x, z));
  writeln_character_array(cout,"");
  if(distance(x, y) + distance(y,z) > distance(x,z)
     || distance(x, z) + distance(x,y) > distance(y,z)
     || distance(y, z) + distance(x,z) > distance(x,y)){
    return true;
  };
  return false;
};
boolean itBelongsSet(set_integer x, integer n, integer y){
  for(integer i = 0; i <n; i++){
    if(x[i] == y){
      return true;
    };
  };
  return false;
};
boolean contentSet(set_integer x, integer n, set_integer y, integer m){
  if(n > m){
    return false;
  };
  for(integer i = 0; i<n; i++){
    if(!itBelongsSet(y,m,x[i])){
      return false;
    };
  };
  return true;
};
boolean isMagicRowIntegerMatriz(integer_matriz x, integer n, integer m){
  integer firstRow = sumRowIntegerMatriz(x,m,0);
  for(integer i = 1; i < n; i++){
    if(firstRow != sumRowIntegerMatriz(x,m,i)){
      return false;
    };
  };
  return true;
};
boolean isMagicColIntegerMatriz(integer_matriz x, integer n, integer m){
  integer firstCol = sumColIntegerMatriz(x,n,0);
  for(integer i = 1; i < m; i++){
    if(firstCol != sumColIntegerMatriz(x,n,i)){
      return false;
    };
  };
  return true;
};
boolean isMagicDiagIntegerMatriz(integer_matriz x, integer n, integer m){
  if(sumFirstDiagIntegerMatriz(x,n,m) == sumSecondDiagIntegerMatriz(x,n,m)){
    return true;
  };
  return false;
};
boolean isMagicIntegerMatriz(integer_matriz x, integer n, integer m){
  if(isMagicColIntegerMatriz(x,n,m) && isMagicDiagIntegerMatriz(x,n,m) && isMagicRowIntegerMatriz(x,n,m)){
    return true;
  };
  return false;
};

