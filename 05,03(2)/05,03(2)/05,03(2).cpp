#include <iostream>

class Wheels {
protected:
    int numberOfWheels;

public:
    Wheels(int numberOfWheels) : numberOfWheels(numberOfWheels) {}

    void printNumberOfWheels() const {
        std::cout << "Number of wheels: " << numberOfWheels << std::endl;
    }
};

class Engine {
protected:
    float horsepower;

public:
    Engine(float horsepower) : horsepower(horsepower) {}

    void printHorsepower() const {
        std::cout << "Horsepower: " << horsepower << " hp" << std::endl;
    }
};

class Doors {
protected:
    int numberOfDoors;

public:
    Doors(int numberOfDoors) : numberOfDoors(numberOfDoors) {}

    void printNumberOfDoors() const {
        std::cout << "Number of doors: " << numberOfDoors << std::endl;
    }
};

class Car : public Wheels, public Engine, public Doors {
public:
    Car(int numberOfWheels, float horsepower, int numberOfDoors)
        : Wheels(numberOfWheels), Engine(horsepower), Doors(numberOfDoors) {}

    void printCarInfo() const {
        printNumberOfWheels();
        printHorsepower();
        printNumberOfDoors();
    }
};

int main() {
    Car car(4, 200.0, 4);
    car.printCarInfo();

    return 0;
}
