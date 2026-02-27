#include <iostream>
// #include <>
int main(){
    std:: string name;
    std::cout<<"What is your name?:\n";
    std::getline(std::cin, name);
    std::cout<<name<<" you are a legend";
    return 0;
}