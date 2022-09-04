#include <iostream>

/* [a  b  c]       [a  b  c]      
   [d  e  f]   x   [d  e  f]  =   
   [g  h  i]       [g  h  i]      
[(a**2 + bd + cg)  (ab + be + ch)  (ac + bf + ci)]
[(da + ed + fg)  (db + e**2 + fh)  (dc + ef + fi)]
[(ga + hd + ig)  (gb + he + ih)  (gc + hf + i**2)]
*/



double mult(double a, double b, double c, double d, double e, double f, double g, double h, double i){
  double a11 = (a*a + b*d + c*g);
  double a12 = (a*b + b*e + c*h);
  double a13 = (a*c + b*f + c*i);
  double a21 = (d*a + e*d + f*g);
  double a22 = (d*b + e*e + f*h);
  double a23 = (d*c + e*f + f*i);
  double a31 = (g*a + h*d + i*g);
  double a32 = (g*b + h*e + i*h);
  double a33 = (g*c + h*f + i*i);

std::cout << "[" << a11 << " " << a12 << " " << a13 << "]" << std::endl;
std::cout << "[" << a21 << " " << a22 << " " << a23 << "]" << std::endl;
std::cout << "[" << a31 << " " << a32 << " " << a33 << "]" << std::endl;

  return a11;
  return a12;
  return a13;
  return a21;
  return a22;
  return a23;
  return a31;
  return a32;
  return a33;

}




int main() {

std::cout << "The matrix squared is: " << std::endl;
// edit matrix here
mult(1, 2, 3, 
    4, 5, 6, 
    7, 8, 9);
}
