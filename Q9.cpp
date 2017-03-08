#include <iostream>

using namespace std;

int main()
{
    // declaring a variable for hours hr and for minutes mi

    int hr;
    int mi;

    cout << "Enter the number of hours: " <<endl;
    cin >> hr;

    cout << "Enter the number of minutes: " <<endl;
    cin >> mi;


    // declaring and equating a formula for total minutes total

    int total=(hr*60)+mi;

    cout << "Total minutes: " << total << " minutes!" << endl;

    return 0;

}


