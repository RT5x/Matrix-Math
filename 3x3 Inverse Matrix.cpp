#include <iostream>
#include <cmath>

// Invert 3x3 matrix, with indices a, b, c, d, e, f, g, h, i
/* [a  b  c] 
   [d  e  f]        (Original matrix)
   [g  h  i]
*/

double inv(double a, double b, double c, double d, double e, double f, double g, double h, double i){

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

std::cout << "[" << m11 << "  " << m12 << "  "<< m13 << " / " << m21 << "  " << m22 << "  "<< m23 << " / " << m31 << "  " << m32 << "  " << m33 << "]\n";
    return m11;
    return m12;
    return m13;
    return m21;
    return m22;
    return m23;
    return m31;
    return m32;
    return m33;
    
}

int main(){   // Main function, takes in argc and argv

inv(1, 2, 5, 4, 5, 6, 7, 8, 9);
return 0;

}
