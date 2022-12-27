// Class : encapsulation enclose data + function (public & private)

// interface to the class = .h 
// -> stores declaration of all MEMBER VARIABLE & functions
// implementation = .cpp
// -> how those works

#include "cube.h"
#include<iostream> //std
using namespace std; //uuic namespace give commonly used name convert std::cout -> cout
// we can any name using uuic eg: Cube c now it will refer to only specific cube which was created here 
// then encapsulate all func and .h class by namespace uiuc

namespace uiuc{

double Cube::getVol(){
    return length_*length_*length_;
}

double Cube::getArea(){
    return 6*length_*length_;
}

void Cube::setLength(double length){
    length_ = length;
}

}

int main(){
uiuc::Cube c;
c.setLength(3.4);
double vol = c.getVol();
cout << "VOLUME: "<<vol << endl;
   
    return 0;
}

/*int main(){
//building prmg

    Cube c;
c.setLength(3.4);
double vol = c.getVol();
// std::cout << "VOLUME: "<<vol << std::endl; // without using namespace
cout << "VOLUME: "<<vol << endl;
   
    return 0;
}*/

