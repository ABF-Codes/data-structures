#include<iostream>
using namespace std;
void combSort(int arr[],int n){
   int gap=n;
   bool swapped = true;
   while(gap!=1 && swapped ==true){
    gap=gap/1.3;
    swapped = false;
    for(int i=0;i<(n-gap);i++){
        if(arr[i]>arr[i+gap]){
            swap(arr[i],arr[i+gap]);
            swapped = true;
        }
    }
    if(swapped==false){
        break;
    }
   }
}
int main(){
     int arr[]={12, 34, 54, 2, 3};
    int n=sizeof(arr)/sizeof(int);
    combSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}