#include<iostream>
using namespace std;

int sumofarray(int arr[], int n){

    if(n==0){
        return 0;
    }

    int ans = arr[0] + sumofarray(arr+1, n-1);
    return ans;

}

int main(){
    int n ;
    cout<< "Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    cout<<"Sum of array is : "<<sumofarray(arr, n);
    return 0;
}