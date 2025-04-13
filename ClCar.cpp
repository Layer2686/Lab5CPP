#include "ClCar.h"

CCar::CCar(string carName, double fuelAmount, double startMileage, double carPrice, double costPerKm)
    : name(carName), fuel(fuelAmount), mileage(startMileage), price(carPrice), pricePerKm(costPerKm) {}

string CCar::getName() const { return name; }
double CCar::getFuel() const { return fuel; }
double CCar::getMileage() const { return mileage; }
double CCar::getPrice() const { return price; }
double CCar::getPricePerKm() const { return pricePerKm; }

void CCar::setFuel(double newFuel) { fuel = newFuel; }
void CCar::setPrice(double newPrice) { price = newPrice; }

void CCar::drive(double distance) {
    if (fuel >= distance) {
        fuel -= distance;
        mileage += distance;
        price -= pricePerKm * distance;
        cout << "The car traveled " << distance << " km.\n";
    } else {
        cout << "Not enough fuel!\n";
    }
}

void CCar::printInfo() const {
    cout << fixed << setprecision(2);
    cout << "Name: " << name << "\n"
         << "Fuel: " << fuel << " l\n"
         << "Mileage: " << mileage << " km\n"
         << "Price: " << price << " UAH\n";
}

// Присвоювання
CCar& CCar::operator=(const CCar& other) {
    if (this != &other) {
        name = other.name;
        fuel = other.fuel;
        mileage = other.mileage;
        price = other.price;
        pricePerKm = other.pricePerKm;
    }
    return *this;
}

// Додавання пального
CCar& CCar::operator+=(double fuelAmount) {
    fuel += fuelAmount;
    return *this;
}

// Віднімання пального
CCar& CCar::operator-=(double fuelAmount) {
    fuel -= fuelAmount;
    return *this;
}

// Порівняння машин (за всіма властивостями)
bool CCar::operator==(const CCar& other) const {
    return name == other.name &&
           fuel == other.fuel &&
           mileage == other.mileage &&
           price == other.price &&
           pricePerKm == other.pricePerKm;
}

// Префіксний декремент — зменшення пального на 1 літр
CCar& CCar::operator--() {
    fuel -= 1;
    return *this;
}

// Виведення
ostream& operator<<(ostream& os, const CCar& car) {
    os << fixed << setprecision(2);
    os << "Name: " << car.name << "\n"
       << "Fuel: " << car.fuel << " l\n"
       << "Mileage: " << car.mileage << " km\n"
       << "Price: " << car.price << " UAH\n";
    return os;
}


// Порівняння з виведенням різниці
void CCar::compareWith(const CCar& other) const {
    cout << "\nComparison between " << name << " and " << other.name << ":\n";
    cout << fixed << setprecision(2);
    cout << "Fuel difference: " << abs(fuel - other.fuel) << " l\n";
    cout << "Mileage difference: " << abs(mileage - other.mileage) << " km\n";
    cout << "Price difference: " << abs(price - other.price) << " UAH\n";
    cout << "Price per km difference: " << abs(pricePerKm - other.pricePerKm) << " UAH/km\n";
}
