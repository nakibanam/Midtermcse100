#include <iostream>

using namespace std;

int main()
{
 // declaring a integer variables for age

 int age;

 cout << "Enter your age: " << endl;
 cin >> age;

 // check whether the age allows to vote

 if (age>=18){
    cout <<"You are eligible to vote. (PS : Make America Great Again :)" << endl;
 }
 else{
    cout << "You are not eligible!" << endl;
 }
 return 0;


}



