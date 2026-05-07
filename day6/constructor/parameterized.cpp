#include <iostream>
using namespace std;

class Cricketers{

    public:
    string name;
    int runs;
    double avg;


    Cricketers(string n, int r, double avg)
    {
        name = n;
        runs = r;
        this->avg = avg;

    }
    void show()
    {
        cout<<"name:"<<name<<endl;
        cout<<"runs:"<<runs<<endl;
        cout<<"avg:"<<avg<<endl;
    }
    
};
    int main(){
        Cricketers C("yash",10000,58.5);
        C.show();

        return 0;

    };