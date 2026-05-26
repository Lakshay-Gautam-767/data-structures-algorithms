#include <iostream>
using namespace std;
int main(){
    // declare a integer type variable
    int score;
    // print Enter the score
    cout << "Enter the score " << endl;

    // take input into score variable
    cin >> score;

    // if condition
    if (score < 300) {
        cout << "India wins" << endl;
    }
    cout << "Pak wins" << endl;

    /* This is illogical: the code currently allows both
       India and Pakistan to be declared winners for the same score.
       That's where an if‑else condition is needed.*/
}
