#include<iostream>
using namespace std;

bool isprime(int n){
    
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
        return 1;
}

int main(){
    int n;
    cout<<"Type n: ";
    cin>>n;

    if(isprime(n)){
        cout<<"Is a prime no.";
    }
    else{
        cout<<"Not a prime no.";
    }
    
}