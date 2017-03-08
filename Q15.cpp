#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare variables for name and id

    string name;
    int id;

    //declare variables to store marks for 3 subjects
    int math;
    int cse;
    int hea;

    // ask user to input name, id, and 3 grades

    cout << "Please enter students id: " << endl;
    cin >> id;
    cout << "Please enter students name: " << endl;
    cin >> name;
    cout << "Enter the students mark for Math 104: " << endl;
    cin >> math;
    cout << "Enter the students mark for CSE 100: " << endl;
    cin >> cse;
    cout << "Enter the students mark for HEA 101: " << endl;
    cin >>hea;

    // declare equations for total marks, percentage and division
    double total=math+cse+hea;
    double percentage= (total/300)*100;

    cout << "TOTAL : " << total << endl;
    cout << "PERCENTAGE : " << percentage << endl;
    // categorize the division

    if (percentage>80){
        cout << "1st divison" << endl;
    }
    else if (percentage>60 && percentage<80){
        cout << "2nd divison" << endl;
    }
    else if (percentage>40 && percentage<60){
        cout << "3rd divison" << endl;
    }
    else{
        cout << "Fail" << endl;
    }

    return 0;
}

