#include<iostream>
using namespace std;
int fac(int a){
    int n=1;
    while(a>1){
       n*=(a--) ;
    }
    return n;
}
int main(){
    int a=5;
  
cout<<fac(a);
    return 0;
}