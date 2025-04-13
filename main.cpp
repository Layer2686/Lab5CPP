#include "ClCar.h"
int main() {
    CCar car1("Lamborghini Aventador 2014", 50, 10000, 36800000, 2);
    CCar car2("Ferrari 488 GTB", 42, 16000,12750000, 4);

    cout << "Initial car state:\n";
    cout << car1;

    car1.drive(30);
    car1 += 10;
    --car1;
    car1 -= 5;

    cout << "\nAfter driving and fuel changes:\n";
    cout << car1;

    cout << "\nSecond car state:\n";
    cout << car2;

    car2.drive(30);

    cout << "\nSecond car state after driving:\n";
    cout << car2;

    if (car1 == car2)
        cout << "Cars are the same.\n";
    else {
        cout << "Cars are different.\n";
        car1.compareWith(car2);
    }

    car2 = car1;
    cout << "\nAfter assigning car1 to car2:\n";
    cout << car2;

    return 0;
}