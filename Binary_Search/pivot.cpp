#include<iostream>
using namespace std;

int pivot(int arr[], int size){

    int s=0, e= size-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] > arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return arr[s];
}

int main(){

    int size;
    cout<<"Enter size of Array: ";
    cin>> size;

    int arr[size];
    cout<<"Enter Array: ";
    for(int i=0; i<size; i++){
        cin>> arr[i];
    }

    cout<<"Pivot element is : "<< pivot(arr, size);
}
