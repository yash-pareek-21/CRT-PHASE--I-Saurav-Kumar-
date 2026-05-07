#include <iostream>
using namespace std;

class Cricketers{
    string name;
    int runs;

    public:

    // Constructor
    Cricketers(string n, int r){
        name = n;
        runs = r;

        cout << "Constructor Called" << endl;
    }

    // Destructor
    ~Cricketers(){
        cout << "Destructor Called for " << name << endl;
    }

    void show(){
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

int main()
{
    Cricketers c1("Yash",13000);

    c1.show();

    return 0;
}