#include<iostream>
using namespace std;

int fact(int n){

    int temp = 1;
    for(int i=1; i<=n; i++){
        temp = temp*i;
    }
    return temp;
}

int nCr(int n, int r){

    int num = fact(n);
    int dec = fact(r)*fact(n-r);

    int rem = num/dec;
    return rem;
}

int main(){

    int n,r;
    cout<<"Type n: ";
    cin>>n;
    cout<<"Type r: ";
    cin>>r;

    cout<<"nCr is: "<< nCr(n,r);
}