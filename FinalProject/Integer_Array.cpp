#include"Integer_Array.h"
#include"Definitions.h"
#include"Char_Array.h"
#include"Integer.h"
#include"Bool.h"
#include<iostream>
using namespace std;


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

integer_array converToBinary(integer number, integer_array x, integer n, integer position ){
    if(n == 0){
     x[position] = number % 2;
     return x;
    }else{
     x[position] = number % 2;
     number = number / 2;
     return converToBinary(number, x, n-1, position+1);
    }
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
set_integer differenceSets(set_integer x, integer n, set_integer y, integer m);
set_integer symmetricDifferenceSets(set_integer x, integer n, set_integer y, integer m);
set_integer contentSet(set_integer x, integer n, set_integer y, integer m);
