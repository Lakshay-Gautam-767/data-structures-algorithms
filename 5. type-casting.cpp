#include <iostream>
using namespace std;
int main(){
    // Implicit Type Conversion
    char ch = 97;
    cout << ch << endl;

    int num = 'b';
    cout << num << endl;

    // Explicit Type Conversion
    double d = 5.7;
    int x = int(d);
    cout << "value of x is " << x << endl;

}
