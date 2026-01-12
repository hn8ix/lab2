#include <iostream>

using namespace std;
//функцiя
int main() {
    int n, a, b;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Remainder of " << n << " / 7 is: " << n % 7 << endl;

    cout << "\nEnter two numbers: ";
    cin >> a >> b;

    if (a % b == 0) {
        cout << a << " is divisible by " << b << " without remainder." << endl;
    } else {
        cout << a << " is NOT divisible by " << b << ". Remainder: " << a % b << endl;
    }

    if (a % 2 == 0) {
        cout << "Number " << a << " is even." << endl;
    } else {
        cout << "Number " << a << " is odd." << endl;
    }

    if (b % 2 == 0) {
        cout << "Number " << b << " is even." << endl;
    } else {
        cout << "Number " << b << " is odd." << endl;
    }

    return 0;
}
