#include <iostream>
// #include <ctime>

int main() {
    int num,guess,tries;
    tries=0;

    srand(time(NULL));
    num=rand()%100+1;             //randum num bw 1 to 100
    std::cout<<"*******NUMBER GUESSING GAME**********\n";
    
    do{
        std::cout<<"Enter a guess bw 1-100: ";
        std::cin>>guess;
        tries++;
        if(guess>num){
            std::cout<<"TOO HIGH...\n";
        }
        else if(guess<num){
            std::cout<<"TOO LOW...\n";
        }
        else{
            std::cout<<"CORRECT GUESS!!\n"<<tries<<" tries taken\n";
        }
    }while(guess!=num);
    std::cout<<"************GAME ENDS************\n";

    return 0;
}