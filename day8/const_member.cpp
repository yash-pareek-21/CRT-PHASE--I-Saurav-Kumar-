#include <iostream> 
using namespace std;

class Car{
    private:
    int speed;

    public:
    Car() {
           speed = 120;
    }


    void showSpeed() const
    {
        // speed = 150;
        cout<< "Speed is:" <<speed<< endl;
    }   
};

int main(){
    Car c1;
    c1.showSpeed();
    return 0;
}