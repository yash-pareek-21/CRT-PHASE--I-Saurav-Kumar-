#include <iostream>
using namespace std;

class Area{
    private:
    int length;
    int width;
    public:
    void setSides(int l,int w){
        length=l;
        width=w;
    }
    friend void showArea(Area a);

};
void showArea(Area b){
    int area = b.length*b.width;
    cout<<"Area is:"<<area<<endl;
}
int main(){
    Area a;
    a.setSides(5,100);
    showArea(a);
    return 0;
}