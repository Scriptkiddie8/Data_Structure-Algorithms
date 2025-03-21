#include<iostream>
using namespace std;

void value(int n){  
    n++;
}


void reference(int& n){
    n++;
}

int main(){

    int n = 5;

    cout<<"first: "<<n<<endl<<endl;
    value(n);  //create copy when passed to function
    cout<<"passbyvalue: "<<n<<endl<<endl;
    reference(n);  //reference to origin memory no copy created
    cout<<"passbyreference: "<<n<<endl<<endl;

    return 0;

}