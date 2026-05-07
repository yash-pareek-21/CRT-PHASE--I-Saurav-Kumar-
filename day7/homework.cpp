//create a college management system in that in base class containing name, age and two derived classes student and teacher  contains their data respectively, then also create a virtual function in that by default they are the part of the college otherwise they are part of the derived class.


#include <iostream>
using namespace std;

// Base Class
class CollegePerson {
protected:
    string name;
    int age;

public:
    // Constructor
    CollegePerson(string n, int a) {
        name = n;
        age = a;
    }

    // Virtual Function
    virtual void role() {
        cout << name << " is a part of the college." << endl;
    }

    // Display common data
    void showBaseData() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Derived Class : Student
class Student : public CollegePerson {
private:
    int rollNo;
    string course;

public:
    Student(string n, int a, int r, string c)
        : CollegePerson(n, a) {
        rollNo = r;
        course = c;
    }

    // Overriding virtual function
    void role() override {
        cout << name << " is a Student of the college." << endl;
    }

    void showStudentData() {
        showBaseData();
        cout << "Roll No : " << rollNo << endl;
        cout << "Course  : " << course << endl;
    }
};

// Derived Class : Teacher
class Teacher : public CollegePerson {
private:
    int teacherID;
    string subject;

public:
    Teacher(string n, int a, int id, string sub)
        : CollegePerson(n, a) {
        teacherID = id;
        subject = sub;
    }

    // Overriding virtual function
    void role() override {
        cout << name << " is a Teacher of the college." << endl;
    }

    void showTeacherData() {
        showBaseData();
        cout << "Teacher ID : " << teacherID << endl;
        cout << "Subject    : " << subject << endl;
    }
};

int main() {

    // Student Object
    Student s1("Rahul", 20, 101, "Computer Science");

    // Teacher Object
    Teacher t1("Sharma Sir", 45, 5001, "Mathematics");

    cout << "===== Student Details =====" << endl;
    s1.showStudentData();
    s1.role();

    cout << endl;

    cout << "===== Teacher Details =====" << endl;
    t1.showTeacherData();
    t1.role();

    return 0;
}