#include"Char_Array.h"
#include"Integer.h"
#include<iostream>
using namespace std;

character_array create_character_array(integer n){
    character_array result =  new character[n];
    return result;
};
void  remove_character_array(character_array n){
    delete[] n;
};
character_array read_character_array(istream& is){
    integer LONGITUD = 1024;
    character_array result = create_character_array(LONGITUD);
    is.getline(result,1024,'\n');
    return result;
};
ostream& write_character_array(ostream& os, character_array a){
    os <<a;
    return os;
};
ostream& writeln_character_array(ostream& os, character_array a){
    os <<a<<endl;
    return os;
};
character_array switchString(character_array txt, integer n){
    character_array switched = create_character_array(n);
    for(int i = 1; i <= n ; i++){
       switched[n-i] = txt[i-1];
    };
    return switched;
};
character_array moveOnePlaceToLeftRecursive(character_array txt, character_array newTxt, integer n, integer i){
  if((n-1) == 0){
    newTxt[n-1] = txt[i];
    return newTxt;
  }else{
    newTxt[n-1] = txt[n-2];
    return moveOnePlaceToLeftRecursive(txt, newTxt, n-1, i+1);
  };
};
character_array moveOnePlaceToLeft(character_array txt, integer n){
  return moveOnePlaceToLeftRecursive(txt, create_character_array(n), n, 0);
};
character_array moveOnePlaceToRightRecursive(character_array txt, character_array newTxt, integer n, integer i){
  if( i == (n-1)){
    newTxt[i] = txt[0];
    return newTxt;
  }else{
    newTxt[i] = txt[i+1];
    return moveOnePlaceToRightRecursive(txt, newTxt, n, i+1);
  };
};
character_array moveOnePlaceToRight(character_array txt, integer n){
  return moveOnePlaceToRightRecursive(txt, create_character_array(n), n, 0);
};
character_array encodeString(character_array txt, integer n, character_array code){
  character_array result = create_character_array(n);
  for(integer i = 0; i < n; i++){
    if(txt[i] >= 'a' && txt[i] <= 'z'){
      result[i] = code[txt[i]-'a'];
    }else{
      result[i] = txt[i];
    };
  };
  return result;
};
character_array decodeString(character_array txt, integer n, character_array code){
  character_array result = create_character_array(n);
  for(integer i = 0; i < n; i++){
    if(txt[i] >= 'a' && txt[i] <= 'z'){
      integer index =  indexChar(txt[i],code,length(code));
      if(index != -1){
        result[i] = (char)(index + 'a');
      }else{
        result = "Internal server error :(";
        return result;
      };
    }else{
      result[i] = txt[i];
    };
  };
  return result;
};
character_array investString(character_array txt, integer n){
  character_array result = create_character_array(n);
  for(integer i = 0; i < n; i++){
    result[i] = txt[n-1-i];
  };
  return result;
};
