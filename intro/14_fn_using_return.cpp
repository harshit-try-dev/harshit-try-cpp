#include <iostream>

double square(double l);            //return value fn
std::string concat(std::string s1,std::string s2);

int main() {
    double length=5.5;
    double area=square(length);
    std::cout<<"area is: "<<area<<"\n";
    std::string name="Harshit";
    std::string end="Harshita";
    std::cout<<"bio: "<<concat(name,end);
    return 0;
}

double square(double l){
    return l*l;
}

std::string concat(std::string s1,std::string s2){
    return s1+" "+s2;
}

