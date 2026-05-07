#include <iostream>
using namespace std;

class Player{
    public:
    string name;
    int age;
    void setName(string n)
    {
        name = n;
    }

};

class Cricketers : public Player{
    public:
        int runs;

        void setruns(int r)
        {
            runs = r;
        }
        void show(){
            cout<<"Name:"<<name<<endl;
            cout<<"Runs:"<<runs<<endl;
        }
};

    int main(){
        int r;
        cin >> r;
        Cricketers c1;
        c1.setName("Yash");
        c1.setruns(r);
        c1.show();

        return 0;
    }