#include<iostream>
using namespace std;


bool checkkey(int arr[], int n, int key){
    if(n==0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }

    else{
        return checkkey(arr+1, n-1, key);
    }
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>> n;

    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    cout<<checkkey(arr, n, key);

    return 0;
}