#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    string rollno;
  
    //default constructor

    Student(){
        name = "yash";
        rollno = "23BCON2213";
    }
    void show()
    {
        cout<<"name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
    }
};
    int main(){
        Student s;
        s.show();
        
        return 0;

    };