#include <iostream>
using namespace std;

class student{
    private:
        int reg =100;

    public:
    string name;   //data members
    string rollno;

    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Reg no:"<<reg<<endl;
        reg++;    
    }


};
int main() {
    student s;
    s.name = "yash pareek";
    s.rollno = "23BCON2213";

    s.display();

    return 0;
};
