#include"Real_Array.h"
#include"Real.h"
#include"Char_Array.h"
#include"Integer.h"
#include<iostream>
using namespace std;



//Constructors
square create_square(){
  square result = new real[2];
  return result;
};
point create_point(){
  point result = new real[2];
  return result;
};
bisector create_bisector(){
  bisector result = new real[3];
  return result;
};
polynomial create_polynomial(integer n){
  polynomial result = new real[n+1];
  return result;
};
//Persistent
polynomial read_polynomial(istream& is, integer n){
  polynomial result = create_polynomial(n);
  for(integer i = 0; i <= n; i++){
    write_character_array(cout,"Coefficient at position x^");
    write_integer(cout,i);
    write_character_array(cout," : ");
    result[i] = read_real(is);
  };
  return result;
};
ostream& write_polynomial(ostream& os, polynomial x, integer n){
  for(integer i = n; i > 0; i--){
    if(x[i] != 0){
      if(i == n){
        os<<x[i]<<"x^"<<i;
      }else{
        if(x[i] > 0){
          os<<" + "<<x[i]<<"x^"<<i;
        }else{
          os<<" "<<x[i]<<"x^"<<i;
        }
      };
    };
  };
  if(x[0] > 0){
    os <<" + "<<x[0];
  }else{
    os<<" "<<x[0];;
  };
  os<<endl;
  return os;
};
point read_point(istream& is){
  point result = create_point();
  write_character_array(cout, "X: ");
  result[0] = read_real(cin);
  write_character_array(cout, "Y: ");
  result[1] = read_real(cin);
  writeln_character_array(cout, "");
  return result;
};
square read_square(istream& is){
  square result = create_point();
  write_character_array(cout, "Width: ");
  result[0] = read_real(cin);
  write_character_array(cout, "Height: ");
  result[1] = read_real(cin);
  writeln_character_array(cout, "");
  return result;
};
ostream& write_bisector(ostream& os, bisector x){
  writeln_character_array(os, "Point");
  write_character_array(os, "X: ");
  os<<x[0];
  write_character_array(os, "\n");
  write_character_array(os, "Y: ");
  os<<x[1];
  write_character_array(os, "\n");
  write_character_array(os, "Slope: ");
  os<<x[3];
  return os;
};
//Analyzers
point intersection(real m, point x, real mP, point y){
  point result = create_point();
  if(m - mP == 0){
    result[0] =  NULL;
    result[1] = NULL;
    return result;
  };
  result[0] = (m * x[0] - x[1] - mP*y[0] + y[1]) / (m - mP);
  result[1] = m * result[0] - (m * x[0] + x[1]);
  return result;
  delete[] result;
};
point baseAndHeight(point x, point y, point z){
  point result = new double[2];
  result[0] = distance(x,y);
  double* pointIntersection = new double[2];
  double slopeN = slope(x,y);
  double slopeP = slopePerpendicular(slopeN);
  pointIntersection = intersection(slopeN, x, slopeP, z);
  result[1] = distance(pointIntersection, z);
  return  result;
};
point middlePoint(point x, point y){
  point result = create_point();
  result[0] = ((x[0] + y[0])/2);
  result[1] = ((x[1] + y[1])/2);
  return result;
};
bisector bisectorABC(point x, point y, point z){
  real yCoordinateOfZ = yCoordinate(slope(x,y), x, z[0]);
  point pointInLine = create_point();
  pointInLine[0] = z[0];
  pointInLine[1] = yCoordinateOfZ;
  point middlePointZ = create_point();
  middlePointZ = middlePoint(x, pointInLine);
  bisector result = create_bisector();
  result[0] =y[0];
  result[1] = y[1];
  result[3] = slope(middlePointZ, y);
  return result;
  delete[] middlePointZ;
};
