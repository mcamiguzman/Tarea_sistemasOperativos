#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(string clr = "undefined") : color(clr) {}

    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    void setColor(const string& clr) {
        color = clr;
    }

    string getColor() const {
        return color;
    }

    virtual ~Shape() {}
};


class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h, string clr = "undefined")
        : Shape(clr), width(w), height(h) {}

    double area() const override {
        return width * height;
    }

    double perimeter() const override {
        return 2 * (width + height);
    }
};

class Square : public Rectangle {
public:
    Square(double side, string clr = "undefined")
        : Rectangle(side, side, clr) {}
};


class Triangle : public Shape {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3, string clr = "undefined")
        : Shape(clr), side1(s1), side2(s2), side3(s3) {}

    double area() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    Rectangle rect(5, 3, "red");
    cout << "Rectangle:\n";
    cout << "Color: " << rect.getColor() << "\n";
    cout << "Area: " << rect.area() << "\n";
    cout << "Perimeter: " << rect.perimeter() << "\n\n";

    Square sq(4, "blue");
    cout << "Square:\n";
    cout << "Color: " << sq.getColor() << "\n";
    cout << "Area: " << sq.area() << "\n";
    cout << "Perimeter: " << sq.perimeter() << "\n\n";

    Triangle tri(3, 4, 5, "green");
    cout << "Triangle:\n";
    cout << "Color: " << tri.getColor() << "\n";
    cout << "Area: " << tri.area() << "\n";
    cout << "Perimeter: " << tri.perimeter() << "\n\n";

    return 0;
}
