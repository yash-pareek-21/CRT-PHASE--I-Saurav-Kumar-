#include <iostream>
using namespace std;

class ATM{
    private:
    int balance;
    public:
    void setBalance(int balance){
        this->balance = balance;
    }
    void withdraw(int amount){
        if(amount>balance){
            cout<<"insufficient Balance"<<endl;
        }
        else{
            balance -=amount;
            cout<<"Amount Withdrawn:"<<amount<<endl;
        }
    }
    int getBalance(){
        return balance;
    }
};

int main(){
    int n;
    cin>> n;
    ATM a;
    a.setBalance(n);
    cout<<"Balance is:"<<a.getBalance()<<endl;
    return 0;
}