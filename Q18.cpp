#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declare a string variable to input from user
    char a;

    cout << "Enter an alphabet: " << endl;
    cin >> a;

    // checking whether the alphabet is vowel or not

    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){

        cout<< "The alphabet is a vowel" << endl;
    }
    else {
        cout<< "The alphabet is a not vowel. It is a consonant!" << endl;

    }

    return 0;
}

