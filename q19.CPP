#include <iostream>
#include <string>

using namespace std;

int main()
{
// DECLARE VARIABLES FOR COST PRICE AND SELLING PRINCE

    int cost;
    int sell;

    cout << "Enter the cost price: " << endl;
    cin >> cost;
    cout << "Enter the selling price: " << endl;
    cin >>sell;

// finding profit or loss

    if (sell>cost){

            // declaring formula to find the loss or profit
            int profit=sell-cost;

            cout <<"the profit is " << profit << endl;
    }
    else {

        // declaring formula to find the loss

            int loss=-(sell-cost);
            cout <<"the loss is " << loss << endl;
    }

    return 0;

}

