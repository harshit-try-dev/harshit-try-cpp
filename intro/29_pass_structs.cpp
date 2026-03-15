#include <iostream>
struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);

int main() {
    Car car1;
    Car car2;

    car1.model="mustang";
    car1.year=2023;
    car1.color="red";

    car2.model="ghost";
    car2.year=2026;
    car2.color="black";

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car){
    std::cout<<&car<<'\n';
    std::cout<<car.model<<' '<<car.year<<' '<<car.color<<'\n';
}