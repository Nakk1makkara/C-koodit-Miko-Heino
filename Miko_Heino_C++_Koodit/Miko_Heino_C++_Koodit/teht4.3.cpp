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

    void travel(double hours) {
        distanceTraveled += static_cast<int>(currentSpeed * hours);
    }

private:
    std::string licensePlate;
    int maxSpeed;
    int currentSpeed;
    int distanceTraveled;
};

int main() {
    Auto Car1("ABC-123", 100);
    Car1.printSpecs();

    Car1.accelerate(30);
    std::cout << "Auton nopeus kiihdytyksen jälkeen: " << Car1.printSpecs() << " km/h" << '\n';

    Car1.accelerate(70);
    std::cout << "Auton nopeus kiihdytyksen jälkeen: " << Car1.printSpecs() << " km/h" << '\n';

    Car1.accelerate(50);
    std::cout << "Auton nopeus kiihdytyksen jälkeen: " << Car1.printSpecs() << " km/h" << '\n';

    Car1.travel(1.5);
    std::cout << "Auton kuljettu matka kulkemisen jälkeen: " << Car1.printSpecs() << " km" << '\n';

    Car1.accelerate(-200);
    std::cout << "Auton nopeus hätäjarrutuksen jälkeen: " << Car1.printSpecs() << " km/h" << '\n';

    return 0;
}
