#include "Problems_Library.h"
#include "GlobalFunctions.h"
#include "Integer.h"
#include "Real.h"
#include "Char_Array.h"
#include "Real_Array.h"
#include "Bool.h"
void PointLineOrTriangle(){
  write_line(cout);
  writeln_character_array(cout, "First Point");
  real_array point1 = read_point(cin);
  writeln_character_array(cout, "Second Point");
  real_array point2 = read_point(cin);
  writeln_character_array(cout, "Third Point");
  real_array point3 = read_point(cin);
  if(isPoint(point1, point2,point3)){
    writeln_character_array(cout, "Is Point");
    return;
  };
  if(isTriangle(point1, point2,point3)){
    writeln_character_array(cout, "Is Triangle");
    return;
  };
  if(isLine(point1, point2,point3)){
    writeln_character_array(cout, "Is Line");
    return;
  };
  writeln_character_array(cout, "What the fuck did you do?");
};
void Area(){
  //Verify is really triangle
  write_line(cout);
  writeln_character_array(cout, "First Point");
  real_array point1 = read_point(cin);
  writeln_character_array(cout, "Second Point");
  real_array point2 = read_point(cin);
  writeln_character_array(cout, "Third Point");
  real_array point3 = read_point(cin);
  write_character_array(cout, "The area is: ");
  write_real(cout, areaOfTriangle(point1, point2, point3));
};
void TypeOfTriangle(){
//Verify is really triangle
  write_line(cout);
  writeln_character_array(cout, "First Point");
  real_array point1 = read_point(cin);
  writeln_character_array(cout, "Second Point");
  real_array point2 = read_point(cin);
  writeln_character_array(cout, "Third Point");
  real_array point3 = read_point(cin);
  writeln_character_array(cout, "Type triangle by sides");
  real distance1 = distance(point1, point2);
  real distance2 = distance(point1, point3);
  real distance3 = distance(point2, point3);
  switch(triangleType(distance1, distance2,distance3)){
    case 0:
      writeln_character_array(cout, "The triangle is equilateral");
      break;
    case 1:
      writeln_character_array(cout, "The triangle is isosceles");
      break;
    case 2:
      writeln_character_array(cout, "The triangle is scalene");
      break;
  };
  writeln_character_array(cout, "Type triangle by angles");
  switch(triangleTypeAngle(angleABC(distance1, distance2, distance3), angleABC(distance1, distance3, distance2), angleABC(distance3, distance1, distance2))){
    case 0:
      writeln_character_array(cout, "The triangle is acute-angled");
      break;
    case 1:
      writeln_character_array(cout, "The triangle is rectangle");
      break;
    case 2:
      writeln_character_array(cout, "The triangle is obtuse");
      break;
  };
};
void InternalAngles(){
//Verify is really triangle
  write_line(cout);
  writeln_character_array(cout, "Point A");
  real_array point1 = read_point(cin);
  writeln_character_array(cout, "Point B");
  real_array point2 = read_point(cin);
  writeln_character_array(cout, "Point C");
  real_array point3 = read_point(cin);
  real distance1 = distance(point1, point2);
  real distance2 = distance(point1, point3);
  real distance3 = distance(point2, point3);
  write_character_array(cout, "Angle between ABC");
  write_real(cout, angleABC(distance1, distance2, distance3));
  write_character_array(cout, "\n");
  write_character_array(cout, "Angle between BAC");
  write_real(cout, angleABC(distance2, distance1, distance3));
  write_character_array(cout, "\n");
  write_character_array(cout, "Angle between BCA");
  write_real(cout, angleABC(distance2, distance3, distance1));
};
void BaseAndHeight(){
//Verify is really triangle
  write_line(cout);
  writeln_character_array(cout, "First Point");
  real_array point1 = read_point(cin);
  writeln_character_array(cout, "Second Point");
  real_array point2 = read_point(cin);
  writeln_character_array(cout, "Third Point");
  real_array point3 = read_point(cin);
  point result = baseAndHeight(point1, point2, point3);
  write_character_array(cout, "Base: ");
  write_real(cout, result[0]);
  write_character_array(cout, "\n");
  write_character_array(cout, "Height: ");
  write_real(cout, result[1]);
};
void Bisectors(){
//Verify is really triangle
  write_line(cout);
  writeln_character_array(cout, "We are working on it");

/*
  writeln_character_array(cout, "Point A");
  real_array point1 = read_point(cin);
  writeln_character_array(cout, "Point B");
  real_array point2 = read_point(cin);
  writeln_character_array(cout, "Point C");
  real_array point3 = read_point(cin);
  write_bisector(cout, bisectorABC(point1, point2, point3));*/
};
void OnePointInside(){
//Verify is really triangle
  write_line(cout);
  writeln_character_array(cout, "We are working on it");

};
void ThreePoints(){
  write_line(cout);
  writeln_character_array(cout, "Choose the problem");
  writeln_character_array(cout, "1. Point, Line or Triangle \n");
  writeln_character_array(cout, "Problems only if the three points form a triangle \n");
  writeln_character_array(cout, "2. Area");
  writeln_character_array(cout, "3. Type of triangle");
  writeln_character_array(cout, "4. Internal angles");
  writeln_character_array(cout, "5. Base and height");
  writeln_character_array(cout, "6. Bisectors");
  writeln_character_array(cout, "7. One point inside of triangle?");
  option optionNumber = read_option(cin);
  switch(optionNumber){
    case 1:PointLineOrTriangle();break;
    case 2:Area();break;
    case 3:TypeOfTriangle();break;
    case 4:InternalAngles();break;
    case 5:BaseAndHeight();break;
    case 6:Bisectors();break;
    case 7:OnePointInside();break;
  };
};
void FourPoints(){
  write_line(cout);
  writeln_character_array(cout, "We are working on it");
};
void Cube(){
  write_line(cout);
  writeln_character_array(cout, "Largest cube length");
  real n = read_real(cin);
  writeln_character_array(cout, "Other cube length");
  real m = read_real(cin);
  if(n < m){
    writeln_character_array(cout, "I am not stupid");
    return ;
  };
  write_character_array(cout, "It's: ");
  write_integer(cout, cubeInsideOtherCube(n, m));
  write_character_array(cout, " times");
};
void Geometrical(){
  write_line(cout);
  writeln_character_array(cout, "Choose the problem");
  writeln_character_array(cout, "1. Three points in plane");
  writeln_character_array(cout, "2. Four points in plane");
  writeln_character_array(cout, "3. Cube");
  option optionNumber = read_option(cin);
  switch(optionNumber){
    case 1:ThreePoints();break;
    case 2:FourPoints();break;
    case 3:Cube();break;
  };
};
