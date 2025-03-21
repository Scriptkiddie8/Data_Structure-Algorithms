#include<iostream>
using namespace std;

int main(){

    // int arr[4] = {21,43, 65, 4};
    // cout<<"1st: " << arr<<endl;
    // cout<< "2nd: " << *arr << endl;
    // cout<< "3rd: " << arr+1 << endl;
    // cout<< "4th: " << *arr[1] << endl;


    char ch = 'f';
    char *ptr = &ch;
    cout<<"char1: "<<ptr<<endl; 
    cout<<"char4: "<<*ptr<<endl; 
    cout<<"char2: "<<sizeof(ptr)<<endl; 
    cout<<"char3: "<<sizeof(*ptr)<<endl; 



    return 0;

}