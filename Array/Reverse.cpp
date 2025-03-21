#include<iostream>
using namespace std;

void reverse(int arr[], int size){

    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++,end--;
    }
    
}

void print(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];

    cout<<"Give values to array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    reverse(arr,size);  
    print(arr, size);  


}