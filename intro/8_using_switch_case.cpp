#include <iostream>
// using std::cout;
// using std::cin;
// using std::string;
int main(){
    int a,b;
    char op;
    std::cout<<"enter num 1: ";
    std::cin>>a;
    std::cout<<"enter num 2: ";
    std::cin>>b;
    std::cout<<"enter the operation(+ - * / %): ";
    std::cin>>op;
    std::cout<<"Result: ";
    switch(op){
        case '+':
            std::cout<<a+b<<'\n';
            break;
        case '-':
            std::cout<<a-b<<'\n';
            break;
        case '*':
            std::cout<<a*b<<'\n';
            break;
        case '/':
            if(b==0){
                std::cout<<"division by zero is not defined.\n";}
            else{
                std::cout<<a/b<<'\n';}
            break;
        case '%':
            if(b==0){
                std::cout<<"Modulo by zero is not defined.\n";}
            else{
                std::cout<<a%b<<'\n';}
            break;
        default:
            std::cout<<"INVALID OPERATOR\n";
    }


    return 0;
}