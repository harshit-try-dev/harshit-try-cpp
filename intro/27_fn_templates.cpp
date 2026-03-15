#include <iostream>
template <typename T, typename U>     //two diff datatypes can be in arguments

auto max(T x, U y){
    return (x>y) ? x: y;
}

int main() {

    std::cout<<  max(2.1,3.2)<<'\n';
    return 0;
}