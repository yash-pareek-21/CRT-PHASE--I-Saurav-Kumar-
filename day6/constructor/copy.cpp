#include <iostream>
using namespace std;

class Cricketers{
    string name;
    int runs;

    public:
    Cricketers(string name, int r){

        this->name =name;
        runs = r;
    }
    Cricketers(const  Cricketers &c){
        this->name = c.name;
        this->runs = c.runs;
    }
    void show(){
        cout<<"name:"<<name << endl;
        cout<<"runs:"<<runs << endl;
    }
};

int main()
{
    Cricketers c1("yash",13000);
    c1.show();
    Cricketers c2(c1);
    c2.show();
    return 0;
}