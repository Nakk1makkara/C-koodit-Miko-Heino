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

    void accelerate(int speedChange) {
        currentSpeed = std::min(std::max(currentSpeed + speedChange, 0), maxSpeed);
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

    auto1.accelerate(30);
    std::cout << "Auton nopeus kiihdytyksen jälkeen: " << auto1.printSpecs() << " km/h" << '\n';

    auto1.accelerate(70);
    std::cout << "Auton nopeus kiihdytyksen jälkeen: " << auto1.printSpecs() << " km/h" << '\n';

    auto1.accelerate(50);
    std::cout << "Auton nopeus kiihdytyksen jälkeen: " << auto1.printSpecs() << " km/h" << '\n';

    auto1.accelerate(-200);
    std::cout << "Auton nopeus hätäjarrutuksen jälkeen: " << auto1.printSpecs() << " km/h" << '\n';

    return 0;
}
