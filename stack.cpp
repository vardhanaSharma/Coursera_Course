#include<iostream>
using namespace std;

// variable have name,type,value,memory address
// & use to get address
// all variables are stored in stack memory(jo function run ho rha h tb tk hi store rhega isme jb tk chl rha h uske baad usko di hui memory release ho jaayegi)
// always start form high mem addr to small

//Pointer
//variable stores memory addr of data int * p = &num
// *p = num addr points to num 

void fun(){
   int x=2;

    cout<<"value of variable: "<<x<<endl;
    cout<<"addr of variable in stack memory: "<<&x<<endl;

}

int main(){
    int num=5;

    cout<<"value of variable: "<<num<<endl;
    cout<<"addr of variable in stack memory: "<<&num<<endl;

fun();

//in main() num is created 1st so its mem addrs is high then x
    return 0;
}