#include <iostream>
double a;
double b;
double c;
double d;
double e;
double f;
double g;
double h;
double i;


int p = 0;
int k = 0;
int r = 0;
/*
Idea:
a * v1 + b * v2 + c * v3 = <0, 0, 0>   [nontrivial a, b, & c]




  */
int main() {

std::cout << "x-component of vector 1:" << std::endl;
std::cin >> a;
  std::cout << "  " << std::endl;
std::cout << "y-component of vector 1:" << std::endl;
std::cin >> b;
  std::cout << "  " << std::endl;
std::cout << "z-component of vector 1:" << std::endl;
std::cin >> c;
  std::cout << "  " << std::endl;
std::cout << "x-component of vector 2:" << std::endl;
std::cin >> d;
  std::cout << "  " << std::endl;
  std::cout << "y-component of vector 2:" << std::endl;
std::cin >> e;
  std::cout << "  " << std::endl;
  std::cout << "z-component of vector 2:" << std::endl;
std::cin >> f;
  std::cout << "  " << std::endl;
  
    std::cout << "x-component of vector 3:" << std::endl;
std::cin >> g;
  std::cout << "  " << std::endl;
  std::cout << "y-component of vector 3:" << std::endl;
std::cin >> h;
  std::cout << "  " << std::endl;
  std::cout << "z-component of vector 3:" << std::endl;
  std::cin >> i;
  std::cout << "  " << std::endl;

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

double c1 {p*m11 + k*m12 + r*m13};
double c2 {p*m21 + k*m22 + r*m23};
double c3 {p*m31 + k*m32 + r*m33};

if(c1 == 0 && c2 ==0 && c3 == 0){
  std::cout << "  " << std::endl;
  std::cout << "The vectors are linearly independent." << std::endl;
    std::cout << "c1 = " << c1 << std::endl;
  std::cout << "c2 = " << c2 << std::endl;
  std::cout << "c3 = " << c3 << std::endl;
}else{
  std::cout << "  " << std::endl;
  std::cout << "The vectors are linearly dependent." << std::endl;
  std::cout << "c1 = " << c1 << std::endl;
  std::cout << "c2 = " << c2 << std::endl;
  std::cout << "c3 = " << c3 << std::endl;
  
}
  
}
