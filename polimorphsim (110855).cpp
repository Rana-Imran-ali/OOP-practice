


#include <iostream>
using namespace std;


class Shape {
public:
    
    virtual void draw() = 0;

    
    virtual ~Shape() {}
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    
    void draw() {
        cout << "Drawing a circle with radius " << radius << endl;
    }
};


class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    
    void draw() {
        cout << "Drawing a rectangle with width " << width << " and height " << height << endl;
    }
};

int main() {
    
    Circle circle(5.0);

    
    Rectangle rectangle(4.0, 6.0);

    
    Shape* shapes[] = {&circle, &rectangle};

    
    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }

    return 0;
}


