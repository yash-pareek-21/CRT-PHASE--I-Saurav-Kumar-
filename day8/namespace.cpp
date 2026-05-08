#include <iostream>
using namespace std;

namespace Virat{
    void show()
    {
        cout<<"He is the part of  The RCB team"<<endl;
    }


}
namespace Rohit{
    void show(){
        cout<<"He is the past of Mi team"<<endl;

    }
}
int main(){
    Virat::show();
    Rohit::show();
    return 0;
}