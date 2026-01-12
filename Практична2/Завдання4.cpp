#include <iostream>
#include <string>
using namespace std;
//функцiя
int main()
{
    int a, b;
    string c, d, e;
    cout << "What's your age? ";
    cin >> a;
    cout << endl;
    cout << "What's your salary? ";
    cin >> b;
    cout << endl;

    if (a > 20 && b > 400 && b < 1000){
        cout << "We will consider your position\n" << endl;
        cout << "What's your name? ";
        cin >> c;
        cout << endl;
        cout << "What's your surname? ";
        cin >> d;
        cout << endl;
        cout << "What kind of job do you want? ";
        cin >> e;
        cout << endl;
        cout <<" Name and Surname: "<< c << " "<< d <<endl;
        cout <<" Age: "<< a << endl;
        cout <<" Salary: "<< b << endl;
        cout <<" The job that user wants: " << e << endl;
    }
    else {
        cout << "You are not suitable";
    }
}
