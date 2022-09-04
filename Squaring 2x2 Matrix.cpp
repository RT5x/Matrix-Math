#include <iostream>

#include <cmath>

/* [a  b]       [a  b]      
   [c  d]   x   [c  d]  =   
[(aa + bc)  (ab + bd)]
[(ca + dc)  (cb + dd)]
*/
double square(double a, double b, double c, double d){
  double a11 = (a*a + b*c);
  double a12 = (a*b + b*d);
  double a21 = (c*a + d*c);
  double a22 = (c*b + d*d);
std::cout << "The matrix squared is: " << std::endl;
std::cout << "[" << a11 << " " << a12 << "]" << std::endl;
std::cout << "[" << a21 << " " << a22 << "]" << std::endl;
  return a11;
  return a12;
  return a21;
  return a22;

}
// edit matrix here
int main() {
square(1, 2, 3, 
4);
}
