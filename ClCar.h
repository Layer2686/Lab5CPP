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
    double getPricePerKm() const;

    void setFuel(double newFuel);
    void setPrice(double newPrice);

    void drive(double distance);
    void printInfo() const;

    // Оператор присвоєння
    CCar& operator=(const CCar& other);

    // Перевантажені оператори
    CCar& operator+=(double fuelAmount); // додавання пального
    CCar& operator-=(double fuelAmount); // віднімання пального
    bool operator==(const CCar& other) const; // порівняння машин
    CCar& operator--(); // префіксний декремент (наприклад, зменшити паливо на 1)

    // Введення/виведення
    friend ostream& operator<<(ostream& os, const CCar& car);
    friend istream& operator>>(istream& is, CCar& car);

    // Порівняння з виведенням різниці
    void compareWith(const CCar& other) const;
};