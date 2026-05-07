#include <iostream>
using namespace std;

class Player{

    public:

    virtual void show(){
        cout<<"cricketer"<<endl;
    }
};

class Cricketers : public Player{

    public:

    void show(){
        cout<<"player"<<endl;
    }
};

int main(){

    Player *p;

    Cricketers c;

    p = &c;

    p->show();

    return 0;
}