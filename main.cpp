#include "ClCar.h"

int main() {
    CCar car1("Lamborghini Aventador 2014", 50, 10000, 36800000, 2);
    CCar car2("Ferrari 488 GTB", 42, 16000,12750000, 4);{}
    cout << "Initial car state:\n";
    cout << car1;

    car1.drive(30);
    car1 += 10;
    --car1;
    car1 -= 5;

    cout << "\nAfter driving and fuel changes:\n";
    cout << car1;

    int choice;
    cout << "\nType 1 if you want to add own car or 2 if you want to use the ready one:";
    cin >> choice;
    cin.ignore();
    switch (choice) {
        case 1: {
            CCar car3;
            cout << "\nEnter data for another car:\n";
            cin >> car3;
            car3.drive(30);
            car3 += 15;
            --car3;
            car3 -=5;
            cout << "\nSecond car state after driving:\n";
            cout << car3;
            if (car1 == car3) {
                cout << "Cars are the same.\n";
            }
            else
            {
                cout << "Cars are different.\n";
                car1.compareWith(car3);
            }
            car3 = car1;
            cout << "\nAfter assigning car1 to car2:\n";
            cout << car3;

            break;
        }
        case 2:
            cout << "\nSecond car state:\n";
        cout << car2;
        car2.drive(30);
        car2 += 15;
        --car2;
        car2 -=5;
        cout << "\nSecond car state after driving:\n";
        cout << car2;
        if (car1 == car2) {
            cout << "Cars are the same.\n";
        }
        else
        {
            cout << "Cars are different.\n";
            car1.compareWith(car2);
        }

        car2 = car1;
        cout << "\nAfter assigning car1 to car2:\n";
        cout << car2;

        break;
    }

    return 0;
}
