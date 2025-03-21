#include<iostream>
using namespace std;

void reachhome(int src, int dest){
    //base case
    cout<<"src: "<<src<<" "<<"dest:"<< dest<< endl;
    if(src==dest){
        cout<<"Pahuch gye: "<<endl;
        return ;

    }

    src++;
    reachhome(src, dest);
}


int main(){

    int src = 1;
    int dest = 10;
    reachhome(src, dest);
}