#include <iostream>
#include <cmath>
using namespace std;



int main() {
  //Input matrix (2x2):
// [a11  a12]
// [a21  a22]

int a11;
int a12;
int a21;
int a22;
cout << "Index 1, 1 (a11): " << endl;
cin >> a11;
cout << "Index 1, 2 (a12): " << endl;
cin >> a12;
cout << "Index 2, 1 (a21): " << endl;
cin >> a21;
cout << "Index 2, 2 (a22): " << endl;
cin >> a22;

//det(A - λI) = det(a11 - λ, a12, a21, a22 - λ) = 0
// λ^2 - (a11 + a22)λ + a11*a22 - a12*a21 = 0
  // Quadratic -->  a = 1, b = - (a11 + a22), c = (a11*a22 - a12*a21)
// λ = ((a11 + a22) +- sqrt((a11 + a22)**2 - 4*1*(a11*a22 - a12*a21)))/(2*1)

double λ1{(0.5 * (
  (a11 + a22) + sqrt(pow((a11 + a22),2) - 
  4*(a11*a22 - a12*a21))
  )
  )};
double λ2{(0.5 * ((a11 + a22) - sqrt(pow((a11 + a22),2) - 4*(a11*a22 - a12*a21))))};


  cout << "The Eigenvalues are : " << λ1 << " and " << λ2 << endl;

}
