#include<iostream>
using namespace std;

int interaction(int arr1[], int arr2[], int size1, int size2){

    //Optimise Solution

    int i=0, j=0;

    while(i<size1 && j<size2){
        if(arr1[i]==arr2[j]){
            return arr1[i];
        }

        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return -1;


    //basic solution:

    // for(int i=0; i<size1; i++){

    //     for(int j=0; j<size2; j++){
    //         if(arr1[i]<arr2[j]){
    //             break;
    //         }
    //         if(arr1[i]==arr2[j]){
    //             return arr1[i];
    //             break;
    //         }
    //     }
    // }
    // return -1;
}


int main(){

    int size1;
    cout<<"Enter the size of array1: ";
    cin>>size1;

    int arr1[size1];
    cout<<"Enter values of array1: ";
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }

    int size2;
    cout<<"Enter the size of array2: ";
    cin>>size2;

    int arr2[size2];
    cout<<"Enter values of array2: ";
    for(int i=0; i<size2; i++){
        cin>>arr2[i];
    }

    cout<<"Interaction at: "<<interaction(arr1,arr2,size1,size2);


}