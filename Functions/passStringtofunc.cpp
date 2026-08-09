#include<iostream>
using namespace std;

string returnStr(string nam){

string greet = "Hello " + nam;
return greet;

}
int main(){
string name;
cin>>name;
string str=returnStr(name);
cout <<str;
    return 0;
}