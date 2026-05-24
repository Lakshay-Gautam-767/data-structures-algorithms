#include <iostream>
using namespace std;
int main(){
    int a = 5;
    cout << "int: " << sizeof(a) << " bytes" << endl;

    short b = 5;
    cout << "short: " << sizeof(b) << " bytes" << endl;

    char ch = 5;
    cout << "char: " << sizeof(ch) << " bytes" << endl;

    bool flag = true;
    cout << "bool: " << sizeof(flag) << " bytes" << endl;

    float f = 5;
    cout << "float: " << sizeof(f) << " bytes" << endl;

    double d = 5;
    cout << "double: " << sizeof(d) << " bytes" << endl;

    long long ll = 5;
    cout << "long long: " << sizeof(ll) << " bytes" << endl;
}
