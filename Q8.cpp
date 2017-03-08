#include <iostream>

using namespace std;

int main()
{
    // declaring a variable for radius r

    double r;

    cout << "Enter the radius of the sphere: " <<endl;
    cin >> r;

    // declaring and equating a formula for volume of a sphere

    double volume = (4*3.14*r*r*r)/3;

    cout << "The volume of the sphere is: " << volume <<endl;

    return 0;

}

