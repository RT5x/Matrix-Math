#include <iostream>
#include <cmath>

// Invert 2x2 matrix, with indices a, b, c, d
/*
[a  b]
[c  d]
*/

double inv(double a, double b, double c, double d){
    double m11 = d * (1/((a * d)- (b * c)));
    double m12 = - b * (1/((a * d)- (b * c)));
    double m21 = -c * (1/((a * d)- (b * c)));
    double m22 = a * (1/((a * d)- (b * c)));
std::cout << "[" << m11 << " " << m12 << " / " << m21 << " " << m22 << "]\n";
    return m11;
    return m12;
    return m21;
    return m22;
    
}

int main(){   

inv(1, 8, 3, 4);    // Put matrix here!
return 0;

}
