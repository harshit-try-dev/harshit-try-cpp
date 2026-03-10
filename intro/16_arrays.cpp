#include <iostream>

int main() {
    
    std::string cars[]={"bmw","mustang","el camino","nano"};
    std::cout<<cars[1]<<"\n\n";
    
    for(int i=0; i<sizeof(cars)/sizeof(std::string); i++){
        std::cout<<cars[i]<<'\n';
    }
    return 0;
}   