#include<iostream>
using namespace std;

bool checkbinarykey(int arr[], int s , int e, int k){

    int mid = s + (e-s)/2;
    if(s>e){
        return false;
    }
    if(arr[mid] == k){
        return true;
    }


    if(arr[mid] > k){
        //left m jao
       return checkbinarykey(arr, s, mid-1, k);

    }
    else{
        //right m jao
       return checkbinarykey(arr, mid+1, e , k);
    }
    
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>> n;

    int arr[n];
    cout<<"Enter the sorted array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    cout<<checkbinarykey(arr, 0 , n-1, key);

    return 0;
}