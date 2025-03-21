#include<iostream>
using namespace std;

void reverse(string& s, int start, int end){
    if(start>=end){
        return;
    }

    char first = s[start];
    char last = s[end];

    s[start] = last;
    s[end] = first;

     reverse(s, start+1, end-1);
}

int main(){
    string s;
    cout<<"Give a string: ";
    cin>>s;
    reverse(s, 0, s.length()-1);
    cout<<"Revesed string is: "<< s;
    return 0;
}