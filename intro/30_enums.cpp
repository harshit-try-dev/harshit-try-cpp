#include <iostream>

int main() {
    enum Days{ MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

    int day;
    std::cout << "Enter a number (1-7): ";
    std::cin >> day;

    switch(day) {
        case MONDAY:
            std::cout << "Monday";
            break;
        case TUESDAY:
            std::cout << "Tuesday";
            break;
        case WEDNESDAY:
            std::cout << "Wednesday";
            break;
        case THURSDAY:
            std::cout << "Thursday";
            break;
        case FRIDAY:
            std::cout << "Friday";
            break;
        case SATURDAY:
            std::cout << "Saturday";
            break;
        case SUNDAY:
            std::cout << "Sunday";
            break;
        default:
            std::cout << "Invalid input!";
    }

    return 0;
}