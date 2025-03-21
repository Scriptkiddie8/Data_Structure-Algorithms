#include<iostream>
using namespace std;

int duplicate(int arr[], int size){

    int ans =0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }

    for(int i=1; i<size; i++){
        ans = ans^i;
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

    cout<<"Duplicate element: "<<duplicate(arr, size);

    return 0;

}