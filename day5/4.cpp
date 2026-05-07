//WAP that takes length and width as input and return area of rectangle
#include <iostream>
using namespace std;

// function to calculate area
float areaRectangle(float length, float width) {
    return length * width;
}

int main() {
    float length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    float area = areaRectangle(length, width);

    cout << "Area of rectangle = " << area << endl;

    return 0;
}