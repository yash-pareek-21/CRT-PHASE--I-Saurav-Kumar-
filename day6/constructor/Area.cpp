#include <iostream>
using namespace std;

class Area {
public:
    float area;

    // Default constructor
    Area() {
        area = 0;
    }

    // Constructor for rectangle
    Area(float length, float width) {
        area = length * width;
    }

    // Constructor for circle
    Area(float radius) {
        area = 3.14 * radius * radius;
    }

    void display() {
        cout << "Area = " << area << endl;
    }
};

int main() {
    float l, w, r;

    // Default
    Area a1;
    cout << "Default Constructor:\n";
    a1.display();

    // Rectangle
    cout << "\nEnter length and width: ";
    cin >> l >> w;
    Area a2(l, w);
    cout << "Rectangle ";
    a2.display();

    // Circle
    cout << "\nEnter radius: ";
    cin >> r;
    Area a3(r);
    cout << "Circle ";
    a3.display();

    return 0;
}
