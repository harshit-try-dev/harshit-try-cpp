#include <iostream>
int main(){

    srand(time(NULL));          //pseudo random

    int num1=(rand()%6)+1;      //random nums between 1 to 6
    int num2=(rand()%6)+1;   
    int num3=(rand()%6)+1;

    std::cout<<num1<<"\n";
    std::cout<<num1<<"\n";
    std::cout<<num1<<"\n";

    return 0;
}