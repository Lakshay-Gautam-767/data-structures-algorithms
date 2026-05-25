#include <iostream>
using namespace std;
int main(){
    // 1) Arithmetic Operators
    cout << "Arithmetic Operators" << endl;
    int a = 5;
    int b = 3;

    cout << a + b << endl; // 8
    cout << a - b << endl; // 2
    cout << a * b << endl; // 15
    cout << a / b << endl; // 1
    cout << a % b << endl << endl; // 2

    // When an integer is divided by integer, result will be integer
    cout << 5 / 3 << endl; // 1

    // But, if one value is float or double, output becomes decimal
    cout << 5.0 / 3 << endl;    // 1.66667
    cout << 5 / 3.0 << endl;    // 1.66667
    cout << 5.0 / 3.0 << endl << endl;  // 1.66667

    // 2) Relational Operators
    cout << "Relational Operators" << endl;
    a = 5;
    b = 3;

    cout << (a > b) << endl;    // 1
    cout << (a < b) << endl;    // 0
    cout << (a == b) << endl;   // 0
    cout << (a != b) << endl << endl;   // 1

    // 3) Assignment Operator

    cout << "Assignment Operator" << endl;
    int c = 5;
    cout << c << endl << endl;

    // 4) Logical Operators

    cout << "Logical Operator" << endl;
    a = 5, b = 3;
    cout << (a >= 5 && a <= 3) << endl; // 1
    cout << (a < 4 && b > 3) << endl;   // 0
    cout << (a < 5 || b == 3) << endl;  // 1
    cout << !(a < 5) << endl << endl;   // 1

}
