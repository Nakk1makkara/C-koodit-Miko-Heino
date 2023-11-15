#include <iostream>
#include <string>

class Auto {
public:
    Auto(std::string licensePlate, int maxSpeed)
        : licensePlate(licensePlate), maxSpeed(maxSpeed),
        currentSpeed(0), distanceTraveled(0) {}

    void printSpecs() {
        std::cout << "Rekisteritunnus: " << licensePlate << '\n';
        std::cout << "Huippunopeus: " << maxSpeed << " km/h" << '\n';
        std::cout << "Nykyinen nopeus: " << currentSpeed << " km/h" << '\n';
        std::cout << "Kuljettu matka: " << distanceTraveled << " km" << '\n';
    }

private:
    std::string licensePlate;
    int maxSpeed;
    int currentSpeed;
    int distanceTraveled;
};

int main() {
    Auto auto1("ABC-123", 100);
    auto1.printSpecs();

    return 0;
}
