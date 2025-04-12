#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class CCar {
private:
    string name;
    double fuel;
    double mileage;
    double price;
    double pricePerKm;

public:
    CCar(string carName = "", double fuelAmount = 0, double startMileage = 0, double carPrice = 0, double costPerKm = 0);

    string getName() const;
    double getFuel() const;
    double getMileage() const;
    double getPrice() const;

    void setFuel(double newFuel);
    void setPrice(double newPrice);
    void drive(double distance);
    void printInfo() const;

    // Оператор присвоювання
    CCar& operator=(const CCar& other);

    // Перевантажені оператори
    CCar& operator+=(double fuelAmount); // додати паливо
    CCar& operator-=(double fuelAmount); // зняти паливо
    bool operator==(const CCar& other) const; // порівняння
    CCar& operator--(); // префіксний декремент (зменшення пального)

    // Оператори вводу/виводу
    friend ostream& operator<<(ostream& os, const CCar& car);
    friend istream& operator>>(istream& is, CCar& car);
};
