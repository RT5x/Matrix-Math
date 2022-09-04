#include <iostream>

#include <cmath>

/* [a  b]       [e  f]      
   [c  d]   x   [g  h]  =   

[(ae + bg)  (af + bh)]
[(ce + dg)  (cf + dh)]
*/
double mult(double a, double b, double c, double d, double e, double f, double g, double h){
  double a11 = (a*e + b*g);
  double a12 = (a*f + b*h);
  double a21 = (c*e + d*g);
  double a22 = (c*f + d*h);

std::cout << "[" << a11 << " " << a12 << "]" << std::endl;
std::cout << "[" << a21 << " " << a22 << "]" << std::endl;
  return a11;
  return a12;
  return a21;
  return a22;

}

int main() {
mult(1, 2, 3, 
4, 5, 6, 
7, 8);
}
