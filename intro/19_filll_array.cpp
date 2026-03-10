#include <iostream>

int main() {
    std::string foods[5];
    int size=sizeof(foods)/sizeof(foods[0]);

    for(int i=0; i<size; i++){
        std::cout<<"enter a food #"<<i+1<<" :  ";
        std::getline(std::cin,foods[i]);
    }
    std::cout<<"you like these foods:\n";

    for(std::string food : foods){
        std::cout<<food<<" , ";
    }

    return 0;
}