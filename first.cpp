// write a c++ program that takes an integer as a input from the user 
// print all the number between 1 to n that is diviible by 2.


#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter an integer: ";
    cin >> n;

    cout << "Numbers divisible by 2 between 1 and " << n << " are:\n";

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}