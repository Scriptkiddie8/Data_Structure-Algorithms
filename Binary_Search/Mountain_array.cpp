#include<iostream>
using namespace std;

int mountain(int arr[], int size){

    int s=0, e = size-1;
    int mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid] < arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}


int main(){

    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    mountain(arr, size);
}