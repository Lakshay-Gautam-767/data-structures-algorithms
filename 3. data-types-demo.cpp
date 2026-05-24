#include <iostream>
using namespace std;
int main(){
    int a = 5;
    cout << "value of a is : " << a << endl;

    char ch = 'a';
    cout << "value of ch is : " << ch << endl;

    bool flag = true;
    cout << "value of flag is " << flag << endl; // 1 aur true ka meaning same hai yha.

    // A char variable occupies 1 byte, which is 8 bits.
    // The maximum value a char can hold is (2^8) - 1 = 255.
    // Let's see what happens when we assign a value larger than 255.
    char ch1 = 256;
    cout << "Value of ch1 is " << ch1 << endl;

}
