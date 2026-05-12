#include <iostream>
using namespace std;

class ATM{
    private:
    int balance;

    public:
    ATM(int balance){
        this->balance = balance;
    }
    void withdraw(int amount){
        if(amount > balance)
        {
            cout<< "insufficient Balance"<<endl;
        }
        else{
            balance -= amount;
            cout<<"Amount Withdrawn:"<<amount<<endl;
        }
    }
    void ShowBalance(){
        cout<<"Current balance:"<<balance<<endl;
    }
};

int main(){
    ATM a(5000);
    a.ShowBalance();
    a.withdraw(500);
    a.ShowBalance();

    return 0;
}