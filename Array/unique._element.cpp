#include<iostream>
using namespace std;

//Unsolved Or incorrect code

int unique(int arr[], int size){

    int ans =0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}


int main(){

    int size;
    cout<<"Enter size of Array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter values of array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"unique element: "<<unique(arr, size);
}