#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declaring a character variable to store an input from the user

    char a;

    cout << "Enter a grade: " << endl;
    cin >> a;

    // check the category

    if (a=='a' || a=='A'){
        cout << "You have chosen: Average" <<endl;
    }

    else if (a=='e' || a=='E'){
        cout << "You have chosen: Excellent" <<endl;
    }
    else if (a=='v' || a=='V'){
        cout << "You have chosen: Very Good" <<endl;
    }
     else if (a=='g' || a=='G'){
        cout << "You have chosen: Good" <<endl;
    }
    else if (a=='f' || a=='F'){
        cout << "You have chosen: Fail" <<endl;
    }
    else{
        cout << "Wrong input" << endl;

    }

    return 0;
}
