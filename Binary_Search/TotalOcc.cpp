#include<iostream>
using namespace std;


int firstOcc(int arr[], int size, int target){

    
    int s=0, e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid] == target){
            ans = mid;
            e = mid -1;
        }

        else if(arr[mid] < target){
            s = mid+1;
        }
        else {
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int target){

    
    int s=0, e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid]  == target){
            ans = mid;
            s = mid+1;
        }

        else if(arr[mid] < target){
            s = mid+1;
        }
        else {
            e = mid-1;
        }

        mid = s + (e-s)/2;
    }

    return ans;

}


int main(){

    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter targeted value: ";
    cin>> target;

    int first = firstOcc(arr, size, target);
    int last = lastOcc(arr, size, target);

    int total = last - first + 1;

    cout<< "Total number of Occ : "<< total;




}