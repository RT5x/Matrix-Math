#include <iostream>
#include <cmath>

// Determinant 3x3 square matrix

int det(int a11, int a12, int a13, int a21, int a22, int a23, int a31, int a32, int a33){
    int result = (a11 * ((a22*a33) - (a32 * a23))) - (a12 * ((a21*a33) - (a23 * a31))) + (a13 * ((a21*a32) - (a22 * a31)));
    return result;
}

int main(int argc, char ** argv){   

det(1, 2, 3, 4, 5, 6, 7, 8, 9);
return 0;

}
