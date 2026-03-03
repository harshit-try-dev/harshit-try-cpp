#include <iostream>
#include <ctime>

int main() {
    
    srand(time(0));
    int randNum=rand()%5+1;

    switch(randNum){
        case 1: std::cout<<"you won bumper sticker!\n";
                break;
        case 2: std::cout<<"you won concert ticketss!\n";
                break;
        case 3: std::cout<<"you won tshirt!\n";
                break;
        case 4: std::cout<<"you won nothing!\n";
            break;
        case 5: std::cout<<"you won tryagain pass!\n";
                break;
    }
    return 0;
}