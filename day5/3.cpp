//write a function that takes no. of coffee shots as a input from the user.
#include <iostream>
using namespace std;

// function to take input
int getCoffeeShots() {
    int shots;
    cout << "Enter number of coffee shots: ";
    cin >> shots;
    return shots;
}

int main() {
    int coffeeShots = getCoffeeShots();

    cout << "You ordered " << coffeeShots << " coffee shots." << endl;

    return 0;
}