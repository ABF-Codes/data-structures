#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }

        if(minIdx!=i){
             swap(arr[minIdx],arr[i]);
        }
       
    }
}
int main(){
    int arr[]={5,2,4,1,9};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}