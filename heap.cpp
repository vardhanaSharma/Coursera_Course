#include<iostream>
using namespace std;

// jb function khtm ho jaayega uske baad bhi exist kregi
// new operater return pointer to memory storing data
// function of new=
// allocate memory on heap, initialize data structure, return pointer to start of data structure
// memory will only release after delete operator
// int * numptr (stack) = new int (heap)
// delete operater delete heap alloted memory
// stack mem delete itself after function execution
// nullptr is use to delete the pointers

// access pointer obj by=
// c->getVol() or (*c).getVol()

int main(){
    int *numptr= new int;
    cout<<"*numptr: "<<*numptr<<" random value alloted numptr ("<<endl;
    cout<<"numptr: "<<numptr<<"(address of heap memory [small to large])"<<endl;
    cout<<"&numptr: "<<&numptr<<"(address of stack memory [larger to small])"<<endl;

    *numptr=5;
    cout<<"*numptr: "<<*numptr<<" value 5 alloted numptr ("<<endl;
    cout<<"numptr: "<<numptr<<"(address of heap memory [small to large])"<<endl;
    cout<<"&numptr: "<<&numptr<<"(address of stack memory [larger to small])"<<endl;

    return 0;
}