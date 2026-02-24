#include <iostream>
namespace first{
    int x=1;
}

namespace second{
    int x=2;
}

int main(){
    // using namespace second;
    
    std::cout<<first:: x;
    return 0;
}