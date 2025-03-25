#include<iostream>
using namespace std;

void reverse(string& str, int s, int e){

    if(s>e){
        return;
    }

    swap(str[s], str[e]);
    s++;
    e--;
    reverse(str, s,e);

}

int main(){
    
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    int n= str.size();

    reverse(str, 0 , n-1);
    cout<<str;

    return 0;
}