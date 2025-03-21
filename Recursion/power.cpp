#include<iostream>
using namespace std;

int power(int a, int n){

    if(n==0){
        return 1;
    }

    return a*power(a, n-1);
}




int main(){

    int a;
    cout<<"Enter the value :";
    cin>>a;

    int n;
    cout<<"Enter the power: ";
    cin>>n;

    cout<<"result: "<<power(a,n);
    


    return 0;
}