#include <iostream>
// x + y + z= 1
// 2x - 3y - z = 5
// x - y + 7z = 2

// [1  1   1] [x] = [1]
// [2 -3  -1] [y] = [5]
// [1  -1  7] [z] = [2]

//[x, y, z] = A^-1 * [1, 5, 2]
/*  
[a  b  c] [x] = [p]
[d  e  f] [y] = [k]
[g  h  i] [z] = [r]
*/
/*
[x] = [m11 m12 m13] *  [p] = [p*m11 + k*m12 + r*m13]
[y] = [m21 m22 m23]    [k]   [p*m21 + k*m22 + r*m23]
[z] = [m31 m32 m33]    [r] = [p*m31 + k*m32 + r*m33]
*/
int main() {
double a;
double b;
double c;
double d;
double e;
double f;
double g;
double h;
double i;
double k;
double p;
double r;
std::cout << "3x3 System Solver" << std::endl;
std::cout << " " << std::endl;
std::cout << "First equation x coefficient: " << std::endl;
std::cin >> a;
std::cout << "First equation y coefficient: " << std::endl;
std::cin >> b;
std::cout << "First equation z coefficient: " << std::endl;
std::cin  >> c;


std::cout << "Second equation x coefficient: " << std::endl;
std::cin  >> d;
std::cout << "Second equation y coefficient: " << std::endl;
std::cin  >> e;
std::cout << "Second equation z coefficient: " << std::endl;
std::cin  >> f;

std::cout << "Third equation x coefficient: " << std::endl;
std::cin  >> g;
std::cout << "Third equation y coefficient: " << std::endl;
std::cin  >> h;
std::cout << "Third equation z coefficient: " << std::endl;
std::cin  >> i;
  
std::cout << "First equation equals: " << std::endl;
std::cin >> p;
std::cout << "Second equation equals: " << std::endl;
std::cin >> k;
std::cout << "Third equation equals: " << std::endl;
std::cin >> r;

  double determinant = (a * ((e*i) - (h * f))) - (b * ((d*i) - (f * g))) + (c * ((d*h) - (e * g)));   // Make sure determinant is nonzero!
    double m11 = (e*i - f*h) * (1/determinant);
    double m12 = (c*h - b*i) * (1/determinant);
    double m13 = (b*f - c*e) * (1/determinant);
    double m21 = (f*g - d*i) * (1/determinant);
    double m22 = (a*i - c*g) * (1/determinant);
    double m23 = (c*d - a*f)* (1/determinant);
    double m31 = (d*h - e*g)* (1/determinant);
    double m32 = (b*g - a*h)* (1/determinant);
    double m33 = (a*e - b*d) * (1/determinant);
  
double x {p*m11 + k*m12 + r*m13};
double y {p*m21 + k*m22 + r*m23};
double z {p*m31 + k*m32 + r*m33};
std::cout << "   " << std::endl;
std::cout << "System: " << std::endl;
std::cout << a << "x + " << b << "y + "<< c << "z = " << p << std::endl;
std::cout << d << "x + " << e << "y + "<< f << "z = " << k << std::endl;
std::cout << g <<"x + " << h << "y + " << i << "z = " << r << std::endl;
std::cout << "   " << std::endl;
std::cout << "Solution: " << std::endl;
std::cout << "x = " << x << std::endl;
std::cout << "y = " << y << std::endl;
std::cout << "z = " << z << std::endl;
}
