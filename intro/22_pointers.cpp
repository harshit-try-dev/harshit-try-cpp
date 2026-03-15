#include <iostream>

int main() {

    std :: string name="harshit";
    int age=19;
    std::string freePizzas[5]={"p1","p2","p3","p4","p5"};


    std::string *pName=&name;
    int *pAge=&age;
    std::string *pFreePizzas= freePizzas;

    std::cout<< *pName<<'\n';
    std::cout<< *pAge<<'\n';
    std::cout<< *pFreePizzas<<'\n';

    return 0;
}