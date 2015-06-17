#include"Integer_Array.h"
#include"Definitions.h"
#include"Char_Array.h"
#include"Integer.h"
#include"Bool.h"
#include<iostream>
using namespace std;

integer_array read_integer_array_floors(istream& is, integer n){
  integer_array result = create_integer_array(n);
  for(integer i = 0; i < n; i+=3){
    result[i] = i+1;
    write_character_array(cout, "Floor ");
    write_integer(cout, i+1);
    write_character_array(cout, "\n");
    write_character_array(cout, "How many lounges?: ");
    result[i+1] = read_integer(cin);
    write_character_array(cout, "How many chairs in lounge?: ");
    result[i+2] = read_integer(cin);
  };
  return result;
};
set_integer create_set_integer(integer n){
  set_integer result = new integer[n];
  return result;
};
integer_array create_integer_array(integer n){
  integer_array result = new integer[n];
  return result;
};
ostream& write_set_integer(ostream& os, set_integer x, integer n){
  for(integer i=0; i < n ; i++){
    if(i == (n-1)){
      os<<x[i];
    }else{
      os<<x[i]<<" , ";
    };
  };
  return os;
};
set_integer read_set_integer(istream& is, integer n){
  set_integer result = create_set_integer(n);
  for(integer i = 0; i < n; i++){
    write_character_array(cout, "Enter element ");
    write_integer(cout, i+1);
    write_character_array(cout, " : ");
    result[i] = read_integer(cin);
  };
  return result;
};
integer_array read_integer_array(istream& is, integer n){
  integer_array result = create_integer_array(n);
  for(integer i = 0; i<n;i++){
    write_character_array(cout, "Position ");
    write_integer(cout, i+1);
    write_character_array(cout, ": ");
    result[i] = read_integer(cin);
  };
  return result;
};
integer_array read_integer_array_binary(istream& is, integer n){
  integer_array result = create_integer_array(n);
  for(integer i = 0; i<n;i++){
    write_character_array(cout, "Position ");
    write_integer(cout, i+1);
    write_character_array(cout, ": ");
    result[i] = read_integer(cin);
    while(result[i] != 0 && result[i] != 1 ){
      result[i] = read_integer(cin);
    };
  };
  return result;
};
ostream& write_integer_array(ostream& os, integer_array x, integer n, character_array separator){
  for(integer i = 0; i < n; i++){
    os<<x[i]<<separator;
  };
  return os;
};
integer_array read_integer_array_positive_txt(istream& is, integer n, character_array txt){
  integer_array result = create_integer_array(n);
  for(integer i = 0; i<n;i++){
    write_character_array(cout, txt);
    write_integer(cout, i+1);
    write_character_array(cout, ": ");
    result[i] = read_positive_number(cin);
  };
  return result;
};
set_integer unionSets(set_integer x, integer n, set_integer y, integer m){
  set_integer result = create_set_integer(n+m);
  for(integer i = 0; i<n; i++){
   result[i] = x[i];
  };
  for(integer i = n, j=0; i <n+m; i++){
    result[i] = y[j];
    j++;
  };
  return result;
};
set_integer intersectionSets(set_integer x, integer n, set_integer y, integer m){
  if(n <= m){
    set_integer result = create_set_integer(n);
    for(integer i= 0, j= 0; i<n; i++){
      if(itBelongsSet(y,m,x[i])){
        result[j] = x[i];
        j++;
      };
    };
    return result;
  }else{
    set_integer result = create_set_integer(m);
    for(integer i= 0, j= 0; i<n; i++){
      if(itBelongsSet(x,n,y[i])){
        result[j] = y[i];
        j++;
      };
    };
    return result;
  };
};
set_integer differenceSets(set_integer x, integer n, set_integer y, integer m){
  set_integer result = create_set_integer(n);
  for(integer i= 0, j= 0; i<n; i++){
    if(!itBelongsSet(y,m,x[i])){
      result[j] = x[i];
      j++;
    };
  };
  return result;
};
set_integer symmetricDifferenceSets(set_integer x, integer n, set_integer y, integer m){
  set_integer result = create_set_integer(n+m);
  if(n <= m){
    result = differenceSets(unionSets(x,n,y,m),n+m,intersectionSets(x,n,y,m),n);
  }else{
    result = differenceSets(unionSets(x,n,y,m),n+m,intersectionSets(x,n,y,m),m);
  };
  return result;
};
integer_array directProductIntegerArray(integer_array x, integer_array y, integer n){
  integer_array result = create_integer_array(n);
  for(integer i= 0; i < n; i++){
    result[i] = x[i]*y[i];
  };
  return result;
};
integer_array converToBinary(integer x, integer n){
  integer_array result = create_integer_array(n);
  for(integer i = 0; i < n; i++){
    result[i] = x % 2;
    x = x / 2;
  };
  return result;
};
integer_array  zerosToFinish(integer_array x, integer n){
  integer_array result = create_integer_array(n);
  integer counter = 0;
  for(integer i = 0; i < n; i++){
    if(x[i] != 0){
        result[counter] = x[i];
        counter++;
    };
  };
  for(integer i = counter; i < n; i++){
    result[i] = 0;
  };
  return result;
};
