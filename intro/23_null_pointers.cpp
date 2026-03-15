#include <iostream>

int main() {

    int *pointer=nullptr;
    int x=123;

    pointer=&x;
    
    if(pointer==nullptr){
        std::cout<<"addres was not asssigned!\n";
    }
    else{
        std::cout<<"addresss was assigned!\n";
        std::cout<<*pointer;
    }
    
    return 0;
}