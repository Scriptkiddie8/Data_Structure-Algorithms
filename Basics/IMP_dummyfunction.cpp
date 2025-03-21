#include<iostream>
using namespace std;

void fun(int a){

    a=a/2;
    cout<<"Inside func:"<<a<<endl;
    //Comment 2: Here it will give half value of input value bcz of function

}

int main(){

    int a;
    cout<<"Type a: ";
    cin>>a;

    fun(a); //Comment 3: Func creates it's own dummy memory we don't give the original memory

    cout<<"Outside fun: "<<a;  
    //Comment 1: Here it will give output same as input value bcz it's real memory
}