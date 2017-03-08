#include <iostream>

using namespace std;

int main()
{
 // declaring 3 integer variables n1 and n2 and n3

 int n1;
 int n2;
 int n3;


 cout << "Enter your first number: " << endl;
 cin >> n1;
 cout << "Enter your second number: " << endl;
 cin >> n2;
 cout << "Enter your second number: " << endl;
 cin >> n3;

 // check the 3 numbers to find the largest
 if (n1>n2 && n1>n3){
    cout << "The largest number amongst the numbers "<< n1 << "," << n2 << "," << n3 << " is: " << n1 << endl;
 }
 else if (n2>n1 && n2>n3){
        cout << "The largest number amongst the numbers "<< n1 << "," << n2 << "," << n3 << " is: " << n2 << endl;
 }
 else{
    cout << "The largest number amongst the numbers "<< n1 << "," << n2 << "," << n3 << " is: " << n3 << endl;
 }
 return 0;


}



