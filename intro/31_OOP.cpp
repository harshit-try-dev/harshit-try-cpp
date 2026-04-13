#include <iostream>

class Human{
    public:
    std::string name;
    std::string job;
    int age;

    void eat(){
        std::cout<<"This person is eating..\n";
    }
    void sleep(){
        std::cout<<"This person sleeps...\n";
    }
};

int main() {

    Human human1;
    human1.name="Harshit";
    human1.job="SDE";
    human1.age=19;

    std::cout<<human1.name<<'\n';
    std::cout<<human1.job<<'\n';
    std::cout<<human1.age<<'\n';

    human1.eat();
    human1.sleep();
    
    return 0;
}