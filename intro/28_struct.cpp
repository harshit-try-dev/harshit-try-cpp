#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled=true;
};

int main() {

    student student1;
    student1.name="harshit";
    student1.gpa=3.2;
    // student1.enrolled;

    std::cout<<student1.name<<'\n';
    std::cout<<student1.gpa<<'\n';
    std::cout<<student1.enrolled<<"\n\n";

    student student2;
    student2.name="ishan";
    student2.gpa=9.9;
    // student2.enrolled;

    std::cout<<student2.name<<'\n';
    std::cout<<student2.gpa<<'\n';
    std::cout<<student2.enrolled<<'\n';

    return 0;
}