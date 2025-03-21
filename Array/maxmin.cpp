#include<iostream>
using namespace std;

int maxi(int arr[], int size){
    
    int max = -1;
    for(int i=0; i<size; i++){

        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}


int mini(int arr[], int size){

    int min = 10000;
    for(int i=0; i<size; i++){

        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
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

    cout<<"Max value of array is: "<<maxi(arr, size)<<endl<<endl;
    cout<<"Min value of array is: "<<mini(arr, size)<<endl<<endl;
    


}