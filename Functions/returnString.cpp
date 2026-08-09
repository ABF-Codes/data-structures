#include<iostream>
using namespace std;
string returnStr(){
    string str;
    cout<<"Describe ur self in one line:"<<endl;
    getline(cin,str);
    return str;
}
int main()
{
    string str2= returnStr();
    cout<<str2;

    return 0;
} 