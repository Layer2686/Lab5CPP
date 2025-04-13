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
    // Порівняння з виведенням різниці
    void compareWith(const CCar& other) const;

    void drive(double distance);
    void printInfo() const;

    // getters/setters
    string getName() const;
    double getFuel() const;

    void setFuel(double newFuel);
    double getMileage() const;

    double getPrice() const;
    void setPrice(double newPrice);

    double getPricePerKm() const;


    // Перевантажені оператори
    CCar& operator=(const CCar& other);
    CCar& operator+=(double fuelAmount); // додавання пального
    CCar& operator-=(double fuelAmount); // віднімання пального
    bool operator==(const CCar& other) const; // порівняння машин
    CCar& operator--(); // префіксний декремент (наприклад, зменшити паливо на 1)

    // Введення/виведення
    friend ostream& operator<<(ostream& os, const CCar& car);
    friend istream& operator>>(istream& is, CCar& car);

};
