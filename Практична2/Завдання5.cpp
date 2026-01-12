#include <iostream>
using namespace std;
//функцiя
int main()
{
    int a;

    cout << "What is your score?"<< endl;
    cin >> a;
    cout << endl;

    if (a <= 59){
        cout << "unsatisfactorily.";
    }
    else if (a >= 60 && a <= 74){
        cout << "satisfactorily.";
    }
    else if (a >= 75 && a <= 89){
        cout << "good";
    }
    else if (a >= 90 && a <= 100){
        cout << "perfect!";
    }
    else {
        cout << "you can't have that score!";
    }
}
