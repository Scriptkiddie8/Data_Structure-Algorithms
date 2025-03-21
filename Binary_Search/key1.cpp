#include<iostream>
using namespace std;

int findkey(int arr[], int size, int key){

    int s=0,e=size-1;
    int mid = s + (e-s)/2;
    while(s<=e){

        if(arr[mid]==key){
            return mid;
        }

        else if(key< arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }

        mid = s + (e-s)/2;

    }
    return -1;
}


int main(){

    int size;
    cout<<"Enter size of array:";
    cin>>size;

    int arr[size];
    cout<<"Enter elements of array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;

    int ans = findkey(arr, size, key);
    cout<<ans;
}