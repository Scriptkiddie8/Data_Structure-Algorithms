#include<iostream>
using namespace std;

int main(){

    int a =5;
    cout<<"a: "<<a<<endl<<endl;
    int b= a++;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl<<endl;
    int c = ++a;
    cout<<"a: "<<a<<endl;
    cout<<"c: "<<c<<endl<<endl;
    int d = a++ + ++a;
    cout<<"a: "<<a<<endl;
    cout<<"d: "<<d<<endl<<endl;
}