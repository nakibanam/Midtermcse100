#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //declaring the coefficients
    float a;
    float b;
    float c;

    //declaring variables for roots

    float x1;
    float x2;

    //declaring
    float determinant;
    float real;
    float imaginary;

    cout << "Enter coefficient a: "<< endl;
    cin >> a;
    cout << "Enter coefficient b: "<< endl;
    cin >> b;
    cout << "Enter coefficient c: "<< endl;
    cin>> c;

    // formula for determinant

    determinant = b*b - 4*a*c;

    //check to find the type of roots

    if (determinant > 0) {
        x1 = (-b + sqrt(determinant)) / (2*a);
        x2 = (-b - sqrt(determinant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (determinant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(determinant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        real = -b/(2*a);
        imaginary =sqrt(-determinant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << real << "+" << imaginary << "i" << endl;
        cout << "x2 = " << real << "-" << imaginary << "i" << endl;
    }

    return 0;
}
