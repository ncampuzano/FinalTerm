#include"Integer.h"
#include"Char.h"
#include"Char_Array.h"
#include<math.h>
using namespace std;

//Persistent
integer read_integer(istream& is){
  integer result;
  is>>result;
  return result;
};
option read_option(istream& is){
    integer result = -1;
    while(result <= 0){
        write_character_array(cout, "Enter option: ");
        is>>result;
    };
    return result;
};
integer read_positive_number(istream& is){
    integer result = -1;
    while(result <= 0){
        is>>result;
    };
    return result;
};
integer read_positive_zero_number(istream& is){
    integer result = -1;
    while(result < 0){
        is>>result;
    };
    return result;
};
ostream& write_integer(ostream& os, integer n){
  os<<n;
};
integer read_positive_number_txt(istream& is, character_array txt){
  integer result = -1;
  while(result < 0){
   write_character_array(cout, txt);
   is>>result;
  };
  return result;
};
//Analyzers
integer length(character_array txt){
  integer counter = 0;
  while(true){
    if(txt[counter] == '\0'){
      return counter;
    };
    counter++;
  };
};
integer letterInWord(character letter, character_array txt, integer n){
    integer j = 0;
    for(int i = 0; i < n; i++){
      if(toLower(txt[i])  == toLower(letter))
        j++;
    };
    return j;
};
integer counterLetters(character_array txt, character letter, integer n){
  integer result = 0;
  for(int i = 0; i < n; i++){
    if(txt[i] == letter){
      result++;
    };
  };
  return result;
};
integer howManyLegs(integer ducks, integer scorpions, integer horses){
    return (ducks * 2) + (scorpions * 6) + (horses * 4);
};
integer howManyEggs(integer hens){
    integer middleHens = hens - (hens / 2);
    integer otherMiddleHens = hens - middleHens;
    return (middleHens * 2) + ((otherMiddleHens/2) * 3);
};
integer how_much_milk_cows(integer cows){
  integer middleCows = cows - (cows / 2);
  integer otherMiddleCows  = cows - middleCows;
  return (middleCows * 3) + (otherMiddleCows * 2);
};
integer how_much_milk_goats(integer goats){
  integer otherGoats = goats - (goats/3);
  integer oneThirdGoats = goats - otherGoats;
  return (oneThirdGoats * 2) + otherGoats;
};
integer differentForms(integer lengthMeters){
  return 1 + (lengthMeters / 2);
};
integer sumChairsRecursive(integer_array x, integer n, integer i){
  if(i == n){
    return x[i-1] * x[i];
  }else{
    return x[i+1] * x[i+2] + sumChairsRecursive(x,n,i+3);
  };
};
integer howLegsChair(integer_array x, integer n){
    integer A = sumChairsRecursive(x,n,0);
    integer B = A - (A * 0.3);
    return A + (B* 4);
};
integer howManyMarkesRecursive(integer_array x, integer n, integer i){
  if(i == (n-1)){
    return x[i];
  }else{
    return x[i] + howManyMarkesRecursive(x,n, i+1);
  };
};
integer howManyMarkes(integer_array x, integer n){
  return howManyMarkesRecursive(x,n,0);
};
integer howManyNewBirds(integer x, integer eggs){
  double result = (((x * 0.2) * eggs) * 0.3) * 0.5;
  return (int)result;
};
integer howManyTurns(integer_array x, integer n, integer a, integer b){
    cout<<" : "<<b<<endl;
    cout<<" : "<<a<<endl;
    cout<<" : "<<x[0]<<endl;
    cout<<" : "<<(x[0] * b)<<endl;
    cout<<" : "<<(x[0] * b) / x[a]<<endl;
    return 0;
};
integer idealWell(real lengthWell,  real lengthBrick, real cement){
    return lengthWell / (lengthBrick + (cement / 2));
};
integer idealWell(real_array well, real_array brick, real cement){
    integer width = idealWell(well[0], brick[0], cement);
    integer height = idealWell(well[1], brick[1], cement);
    return width * height;
};
integer triangleType(real a, real b, real c){
  if( a == b && b == c){
    return 0;
  };
  if(a == b || b == c || a == c){
    return 1;
  }else{
    return 2;
  };
};
integer triangleTypeAngle(real a, real b, real c){
  integer x = (integer)a;
  integer y = (integer)b;
  integer z = (integer)c;
  if(x < 90 && y < 90 && z < 90){
    return 0;
  };
  if(x == 90 || y == 90 || z == 90){
    return 1;
  };
  return 2;
};
integer cubeInsideOtherCube(integer m, integer n){
  return pow(n, 3) / pow(m, 3);
};
integer idealWall(real lengthWall,  real lengthBrick, real cement){
    return lengthWall / (lengthBrick + (cement / 2));
};

integer idealWall(square wall, square brick, real cement){
    integer width = idealWall(wall[0], brick[0], cement);
    integer height = idealWall(wall[1], brick[1], cement);
    return width * height;
};
integer howToWeight(integer n){
  /*return (int)ceil(log_b(n,3)) + 1;*/
  /*if(n == 1){
    return 2;
  };
  if(n % 2){
    return 1 + howToWeight(n/2);
  }else{
    return 2 + howToWeight((n-1)/2);
  };*/
};
integer indexChar(character letter, character_array x, integer n){
  for(integer i = 0 ; i < n; i++){
    if(letter == x[i]){
      return i;
    };
  };
  return -1;
};
integer sumColIntegerMatriz(integer_matriz x, integer n, integer col){
  integer result = 0;
  for(integer i = 0; i < n; i++){
    result += x[i][col-1];
  };
  return result;
};
integer sumRowIntegerMatriz(integer_matriz x, integer m, integer row){
  integer result = 0;
  for(integer i = 0; i < m; i++){
    result += x[row-1][i];
  };
  return result;
};
integer sumFirstDiagIntegerMatriz(integer_matriz x, integer n, integer m){
  integer result = 0;
  for(integer i = 0; (i < m)||(i <n); i++){
    result += x[i][i];
  };
  return result;
};
integer sumSecondDiagIntegerMatriz(integer_matriz x, integer n, integer m){
  integer result = 0;
  for(integer i = 0, j = m-1; (j >= 0)||(i < n); i++){
    result += x[i][j];
    j--;
  };
  return result;
};
integer multiplyRowWithColIntegerMatriz(integer_matriz x, integer_matriz y, integer row, integer col, integer n){
  integer result = 0;
  for(integer i = 0; i < n; i++){
    result += x[row][i] * y[i][col];
  };
  return result;
};

