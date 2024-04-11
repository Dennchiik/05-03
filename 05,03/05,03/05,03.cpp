#include <iostream>

class Square {
protected:
    float side;

public:
    Square(float side) : side(side) {}

    float getSide() const {
        return side;
    }

    float calculateArea() const {
        return side * side;
    }
};

class Circle {
protected:
    float radius;

public:
    Circle(float radius) : radius(radius) {}

    float getRadius() const {
        return radius;
    }

    float calculateArea() const {
        return 3.14159 * radius * radius;
    }
};

class InscribedCircleSquare : public Square, public Circle {
public:
    InscribedCircleSquare(float side) : Square(side), Circle(side / 2) {}

    float calculateCircleArea() const {
        return Circle::calculateArea();
    }

    float calculateSquareArea() const {
        return Square::calculateArea();
    }
};

int main() {
    float side;
    std::cout << "Enter the side length of the square: ";
    std::cin >> side;

    InscribedCircleSquare shape(side);
    std::cout << "Area of the square: " << shape.calculateSquareArea() << std::endl;
    std::cout << "Area of the inscribed circle: " << shape.calculateCircleArea() << std::endl;

    return 0;
}
