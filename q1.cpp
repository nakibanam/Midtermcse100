#include <iostream>
#include <string>

using namespace std;


int main()
{
    // declaring a string variable to store the name into a variable called name;
string name;

cout << "What is your name?" << endl;
cin >> name;

if (name=="Rabib"){
    cout<< "Hello there Rabib!"<< endl;
}
else if (name=="Nijhum"){
    cout<< "Hello there Nijhum!"<< endl;
}

else{
    cout << "Hello";
}


return 0;
}
