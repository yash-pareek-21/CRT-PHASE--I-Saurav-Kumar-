// swap two number using pointer
#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Before swapping:\n";
    cout << "x = " << x << ", y = " << y << endl;

    swap(&x, &y);  // passing addresses

    cout << "After swapping:\n";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}