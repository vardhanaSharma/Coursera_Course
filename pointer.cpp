#include<iostream>
using namespace std;
//Pointer
//variable stores memory addr of data int * p = &num
// *p = num addr points to num 


int main(){
    int num=5;
    cout<<"num: "<<num<<" value of num"<<endl;
    cout<<"&num: "<<&num<<" address of num"<<endl;

    int *p=&num;
    cout<<"p: "<<p<<" address of num (&num)"<<endl;
    cout<<"&p: "<<&p<<" address of p"<<endl;
    cout<<"*p: "<<*p<<" pointer p points to value of num"<<endl;

    *p = 42;
    cout<<"*p is changed "<<*p<<" so num value will also chnged"<<endl;
    cout<<"num: "<<num<<" value of num"<<endl;
    return 0;
}