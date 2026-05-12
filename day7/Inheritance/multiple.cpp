#include <iostream>
using namespace std;

class Player{
    public:
    string name;
    int age;
    void setname(string n){
        name = n;
    }
};

class Cricketer{
    public:
    int runs;
    void setruns(int r){
        runs = r;
    
    }
};
class IndianCricketers : public Cricketer,public Player{
    public:
    string state;
    void setstate(string s){
        state = s;
    }
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
        cout<<"State:"<<state<<endl;
    }
};
int main(){
    int r;
    cin>> r;
    string s;
    cin>> s;
    IndianCricketers c1;
    c1.setname("yash");
    c1.setruns(r);
    c1.setstate(s);
    c1.show();

    return 0;
}