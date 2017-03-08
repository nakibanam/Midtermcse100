#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declare a int variable for numerator and a denominator

    int num;
    int den;

    cout << "Enter the numerator value: " << endl;
    cin >> num;
    cout << "Enter the denominator value: " << endl;
    cin >> den;

    int quo = num/den;
    int rem = num%den;

    cout << "quotient is: " << quo <<endl;
    cout << "remainder is: " << rem <<endl;

    return 0;


}

