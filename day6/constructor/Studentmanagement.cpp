//write a c++ program to create a student management system where we store name, roll no, reg no, email id, phone number, marks or grade using parameterized and default constructor
#include <iostream>
using namespace std;

class Student {
private:
    string name, rollNo, regNo, email, phone;
    float marks;
    char grade;

public:
    // Default Constructor
    Student() {
        name = "N/A";
        rollNo = "N/A";
        regNo = "N/A";
        email = "N/A";
        phone = "N/A";
        marks = 0;
        grade = 'F';
    }

    // Parameterized Constructor
    Student(string n, string r, string reg, string e, string p, float m) {
        name = n;
        rollNo = r;
        regNo = reg;
        email = e;
        phone = p;
        marks = m;

        // Assign grade based on marks
        if (marks >= 90) grade = 'A';
        else if (marks >= 75) grade = 'B';
        else if (marks >= 50) grade = 'C';
        else grade = 'F';
    }

    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Reg No: " << regNo << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << phone << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    // Using Default Constructor
    Student s1;
    cout << "Default Student:";
    s1.display();

    // Using Parameterized Constructor
    Student s2("Yash Pareek", "23BCON2213", "REG123", 
               "yash@gmail.com", "9876543210", 88);

    cout << "\nParameterized Student:";
    s2.display();

    return 0;
}