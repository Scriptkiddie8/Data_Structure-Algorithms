#include<iostream>
using namespace std;

int sumdigit(int n, int sum){
    if(n<10){
        return n;
    }
    return (n%10) + sumdigit(n/10, sum);
}

int main(){
    int n, sum =0;
    cout<<"Enter the digit: ";
    cin>>n;
    cout<<"sum of digits: "<<sumdigit(n, sum);
}