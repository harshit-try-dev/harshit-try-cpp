#include <iostream>
void walk(int steps);
int factorial(int num);
int main() {

    walk(5);
    std::cout<<factorial(5);
    return 0;
}

void walk(int steps){                    //recursive approach
    if(steps>0){
        std::cout<<"you take a step!\n";
        walk(steps-1);
    }
}

int factorial(int num){
    if(num==0|num==1){
        return 1;
    }
    return num*factorial(num-1);
}
