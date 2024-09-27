#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;


    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;


    int minNum = num1;


    if (num2 < minNum) {
        minNum = num2;
    }


    if (num3 < minNum) {
        minNum = num3;
    }

    cout << "The smallest value is: " << minNum << endl;

    return 0;
}