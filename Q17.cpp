#include <iostream>

using namespace std;

int main()
{
    //declare an input variable to read temperature
    int temp;

    cout << "Enter a value for temperature in Celsius: " << endl;
    cin >> temp;

    // displaying message according to different temperatures

    if (temp<0){
        cout << "Freezing Weather!"<< endl;
    }
    else if (temp>=0 and temp<10){
        cout << "Very Cold Weather!"<< endl;
    }
    else if (temp>=10 && temp<20){
        cout << "Cold Weather!"<< endl;
    }
    else if (temp>=20 && temp<30){
        cout << "Normal Weather!"<< endl;
    }
    else if (temp>=30 && temp<40){
        cout << "Hot Weather!"<< endl;
    }
    else{
        cout << "Its very hot in here!"<< endl;
    }
}



