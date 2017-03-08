#include <iostream>

using namespace std;

int main()
{
 // declaring 2 integer variables n1 and n2

 int n1;
 int n2;


 cout << "Enter your first number: " << endl;
 cin >> n1;
 cout << "Enter your second number: " << endl;
 cin >> n2;

 // check whether n1 and n2 are equal or not

 if (n1==n2){
    cout << n1 << " and " << n2 << " are equal." << endl;
 }
 else{
    cout << n1 << " and " << n2 << " are not equal." << endl;
 }
 return 0;


}


