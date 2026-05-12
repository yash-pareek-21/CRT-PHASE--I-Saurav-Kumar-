// wap that apply 10% discount using refrences update the original bill amount and print the updated bill. 
#include<iostream>
using namespace std;
void applyDiscount(double &billAmount){
    billAmount *= 0.9; //Apply 10% of discount
   }
int main(){
    double billAmount;
    cout << "Enter the original bill amount: ";
    cin>> billAmount;

    applyDiscount(billAmount);

    cout << "discounted bill amount: " <<billAmount << endl;
    return 0;
}   
