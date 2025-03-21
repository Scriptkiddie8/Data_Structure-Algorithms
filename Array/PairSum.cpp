#include<iostream>
using namespace std;

void Pairsum(int arr[], int size, int sum){

    for(int i=0; i<size; i++){

        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]== sum){
                cout<<"Pairs are: "<< arr[i];
                cout<<" , "<< arr[j];
                cout<<endl;
            }
        }
    }
}

int main(){

    int size;
    cout<<"Enter the size of array: ";
    cin>> size;

    int sum;
    cout<<"Enter the sum you want: ";
    cin>>sum;

    int arr[size];
    cout<<"Enter the array: ";
    for(int i=0; i<size; i++){
        cin>> arr[i];
    }

    Pairsum(arr, size, sum);
    return 0;
}