#include <iostream>

void hbd(std::string n,int age){                 //new fn
    std::cout<<"happybirthday to you "<<n<<"...\n\n";
    std::cout<<"happybirthday to you "<<n<<"...\n\n";
    std::cout<<"happybirthday to you "<<n<<"...\n\n";
    std::cout<<"you are  "<<age<<" years old now...\n";
  
}

int main() {
    std::string name="Harshit";
    int age=19;
    hbd(name,age);

    return 0;
}
