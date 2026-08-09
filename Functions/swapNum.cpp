#include<iostream>
using namespace std;
void swapNum(int &a,int &b){
    
    int temp =a;
    a=b;
    b=temp;
}
int main(){
    int a=5;
   int  b=7;
cout<<"Before Swap"<<endl<<"a ="<<a<<"b ="<<b<<endl;
swapNum(a,b);
cout<<"After Swap"<<endl<<"a ="<<a<<"b ="<<b<<endl;
    return 0;
}