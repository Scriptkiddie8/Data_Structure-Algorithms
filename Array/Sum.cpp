#include<iostream>
using namespace std;

int sum(int arr[], int size){

    int num = 0;
    for(int i=0; i<size; i++){
        num = num + arr[i];
    }
    return num;
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

    cout<<"Sum of the array is: "<<sum(arr, size);    


}