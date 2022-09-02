#include <iostream>

#include <cmath>

/* [a  b  c]       [j  k  l]      
   [d  e  f]   x   [m  n  o]  =   
   [g  h  i]       [p  q  r]      

[(aj + bm + cp)  (ak + bn + cq)  (al + bo + cr)]
[(dj + em + fp)  (dk + en + fq)  (dl + eo + fr)]
[(gj + hm + ip)  (gk + hn + iq)  (gl + ho + ir)]
*/

double mult(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k, double l, double m, double n, double o, double p, double q, double r){
  double a11 = (a*j + b*m + c*p);
  double a12 = (a*k + b*n + c*q);
  double a13 = (a*l + b*o + c*r);
  double a21 = (d*j + e*m + f*p);
  double a22 = (d*k + e*n + f*q);
  double a23 = (d*l + e*o + f*r);
  double a31 = (g*j + h*m + i*p);
  double a32 = (g*k + h*n + i*q);
  double a33 = (g*l + h*o + i*r);

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



mult(1, 2, 3, 
4, 5, 6, 
7, 8, 9, 
10, 11, 12, 
13, 14, 15, 
16, 17, 18);
}
