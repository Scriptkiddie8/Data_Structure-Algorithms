#include<iostream>
using namespace std;

bool fun(int a){

    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int a;
    cout<<"Type a: ";
    cin>> a;

    if(fun(a)){
        cout<<"Number is even";
    }
    else{
        cout<<"Number is odd";
    }
}