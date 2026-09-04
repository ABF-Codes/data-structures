#include<iostream>
using namespace std;

void insertionSort(int *arr,int n){
      for(int i=1;i<n;i++){
        int temp=arr[i];
        int prev =i-1;
         while(prev>=0 && arr[prev] > temp){
                swap(arr[prev],arr[prev+1]);
                    prev--;
                    }
                    arr[prev+1]=temp;
        }
           
            return ;
    }

    int main(){
    int arr[]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before Insertion Sort :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    insertionSort(arr,n);
    cout<<endl<<"After Insertion Sort :"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}