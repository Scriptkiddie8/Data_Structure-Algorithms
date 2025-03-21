#include<iostream>
using namespace std;
#define PI 3.14        // this is a macro


int main(){

    int r= 5;
    //area of circle 
    double area = PI*r*r;
    cout<<"Area: "<< area<< endl;


    return 0;
}


//PI is not a variable
// we can't change or use operations on PI inside the code
//can only update value of PI where we have defined it