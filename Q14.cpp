#include <iostream>

using namespace std;

int main()
{
 // declaring 2 integer variables for coordinates of x and y
 int x;
 int y;

    cout << "Enter a value for x: " << endl;
    cin >> x;
    cout << "Enter a value for y: " << endl;
    cin >> y;

 // check to find the quadrant of the two points

 if (x>0 && y>0){
    cout << "The point lies in the 1st quadrant!" << endl;
 }
 else if(x<0 && y>0){
    cout << "The point lies in the 2nd quadrant!" << endl;
 }
 else if (x<0 && y<0){
    cout << "The point lies in the 3rd quadrant!" << endl;
 }
 else {
    cout << "The point lies in the 4th quadrant!" << endl;
 }


 return 0;


}


