#include <iostream>

class Point {
public:
    int x, y;

    Point(int x_val, int y_val) : x(x_val), y(y_val) {}
    Point() : x(0), y(0) {}
};

class Point3D {
public:
    int x, y, z;
    Point3D(int x_val, int y_val, int z_val = 0) : x(x_val), y(y_val), z(z_val) {}
    explicit Point3D(const Point& p) : x(p.x), y(p.y), z(0) {}
    void display() const {
        std::cout << "x=" << x << ", y=" << y << ", z=" << z << std::endl;
    }
};

int main() {
    int x, y;
    std::cout << "Ingrese las coordenadas x e y para Point: ";
    std::cin >> x >> y;
    Point p1(x, y);
    Point3D p3d_explicit = static_cast<Point3D>(p1); // Conversión explícita de Point a Point3D
    p3d_explicit.display();
    return 0;
}
