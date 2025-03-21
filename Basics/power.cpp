#include<iostream>
using namespace std;

int power(int a, int b){

    int num = 1;
    for(int i=0; i<b; i++){
        num = num*a;
    }
    return num;
}


int main(){

    int a,b;
    cout<<"Type a: ";
    cin>>a;
    cout<<"Type b: ";
    cin>>b;

    int ans = power(a,b);
    cout<<"Your answer is: "<<ans;

}