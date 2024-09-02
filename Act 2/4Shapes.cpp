#include <iostream>
#include <cmath>
#include <string>

// Base class for all shapes
class Shape {
protected:
    std::string color;

public:
    // Constructor to initialize color
    Shape(std::string clr = "undefined") : color(clr) {}

    // Virtual functions for area and perimeter calculation
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    // Function to set and get color
    void setColor(const std::string& clr) {
        color = clr;
    }

    std::string getColor() const {
        return color;
    }

    // Virtual destructor
    virtual ~Shape() {}
};

// Rectangle class derived from Shape
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h, std::string clr = "undefined")
        : Shape(clr), width(w), height(h) {}

    // Implement area and perimeter calculations
    double area() const override {
        return width * height;
    }

    double perimeter() const override {
        return 2 * (width + height);
    }
};

// Square class derived from Rectangle (since a square is a special case of a rectangle)
class Square : public Rectangle {
public:
    Square(double side, std::string clr = "undefined")
        : Rectangle(side, side, clr) {}
};

// Triangle class derived from Shape
class Triangle : public Shape {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3, std::string clr = "undefined")
        : Shape(clr), side1(s1), side2(s2), side3(s3) {}

    // Implement area calculation using Heron's formula
    double area() const override {
        double s = (side1 + side2 + side3) / 2;
        return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Implement perimeter calculation
    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    // Create a rectangle
    Rectangle rect(5, 3, "red");
    std::cout << "Rectangle:\n";
    std::cout << "Color: " << rect.getColor() << "\n";
    std::cout << "Area: " << rect.area() << "\n";
    std::cout << "Perimeter: " << rect.perimeter() << "\n\n";

    // Create a square
    Square sq(4, "blue");
    std::cout << "Square:\n";
    std::cout << "Color: " << sq.getColor() << "\n";
    std::cout << "Area: " << sq.area() << "\n";
    std::cout << "Perimeter: " << sq.perimeter() << "\n\n";

    // Create a triangle
    Triangle tri(3, 4, 5, "green");
    std::cout << "Triangle:\n";
    std::cout << "Color: " << tri.getColor() << "\n";
    std::cout << "Area: " << tri.area() << "\n";
    std::cout << "Perimeter: " << tri.perimeter() << "\n\n";

    return 0;
}
