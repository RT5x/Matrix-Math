#include <iostream>
// x + y = 1       By RT5x
// 2x - 3y = 5

// [1  1] [x] = [1]
// [2 -3] [y] = [5]

//[x, y] = A^-1 * [1, 5]
/*  
[a  b] [x] = [p]
[c  d] [y] = [z]
*/
/*
[x] = [m11 m12] *  [p] = [p*m11 + z*m12]
[y] = [m21 m22]    [z]   [p*m21 + z*m22]
*/
int main() {
double a;
double b;
double c;
double d;
double z;
double p;
std::cout << "2x2 System Solver" << std::endl;
std::cout << " " << std::endl;
std::cout << "First x coefficient: " << std::endl;
std::cin >> a;
std::cout << "First equation y coefficient: " << std::endl;
std::cin >> b;
std::cout << "Second equation x coefficient: " << std::endl;
std::cin  >> c;
std::cout << "Second equation y coefficient: " << std::endl;
std::cin  >> d;
std::cout << "First equation equals: " << std::endl;
std::cin >> p;
std::cout << "Second equation equals: " << std::endl;
std::cin >> z;


double m11 {d * (1/((a * d)- (b * c)))};
double m12 {- b * (1/((a * d)- (b * c)))};
double m21 {-c * (1/((a * d)- (b * c)))};
double m22 {a * (1/((a * d)- (b * c)))};
double x {p*m11 + z*m12};
double y {p*m21 + z*m22};
std::cout << "   " << std::endl;
std::cout << "System: " << std::endl;
std::cout << a << "x + " << b << "y = " << p << std::endl;
std::cout << c << "x + " << d << "y = " << z << std::endl;
std::cout << "   " << std::endl;
std::cout << "Solution: " << std::endl;
std::cout << "x = " << x << std::endl;
std::cout << "y = " << y << std::endl;
}
