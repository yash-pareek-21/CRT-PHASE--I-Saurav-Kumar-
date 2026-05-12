#include <iostream> 
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str1 = "hey";
    string str2 = "you!";
    cout<< str1 << " " <<str2 << endl;



    int n =str1.length();
    cout<<"Length of String is:"<< n << endl;

    cout<< "After Appending String is:" << str1.append("Student") << endl;

    cout<< "Is string Empty:"<< str2.empty()<<endl;

    cout<< "After Concatination of String is:" <<str1 + " haa tum!"<<endl;
    cout<< "After Concatinattion of String is:"<< str1 <<endl;

    str2.push_back('U');
    cout<< "After push_back method:"<< str2 <<endl;

    str2.pop_back();
    cout<< "After pop_back() method:"<< str2 << endl;

    int index = str1.find("ello");
    cout<< "Index of 'ello' in string 1"<< index <<endl;

    //
    char ch = str1.at(1);
    cout<<"Character at index 1 in str1:"<<ch<<endl;

    //swap() method
    str1.swap(str2);
    cout<< "After swapiing str1 and str2:"<<endl;
    cout<<"str1:"<<str1<<endl;  //Jecrc
    cout<<"str2:"<<str2<<endl;

    //substr() method
    string substr = str2.substr(5, 6);
    cout<<"Substring of str2 of index 5 with length 6:"<< substr<<endl;

    //getline() method
    string str3;
    //cin >> str3;
    getline(cin, str3);
    cout<<"You dared:"<< str3 <<endl;
}