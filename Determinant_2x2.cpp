#include <iostream>
#include <cmath>

// Determinant 2x2
// Square matrix with  indices a, b, c, d
int det(int a, int b, int c, int d){
    int result = (a * d) - (b * c);
    return result;
}

int main(int argc, char ** argv){   // Main function, takes in argc and argv

det(1, 2, 3,4);
return 0;

}

