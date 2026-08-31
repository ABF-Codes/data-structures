#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return ;
}
int main(){
    int arr[]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before Bubble Sort :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    bubbleSort(arr,n);
    cout<<endl<<"After Bubble Sort :"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}