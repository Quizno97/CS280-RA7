#include <iostream>
using namespace std;
// Base class
class Shape
{
public:
    double const pi = 3.14;
    // four pure virtual functions
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    virtual string getName() = 0;
    virtual void print() = 0;
};
// Derived class
class Circle : public Shape
{
public:
    double radius;
    // constructor to initialize radius value
    Circle(double radius)
    {
        this->radius = radius;
    }
    // override four virtual(abstract) functions
    double getArea()
    {
        return pi * radius * radius;
    }
    double getPerimeter()
    {
        return 2 * pi * radius;
    }
    string getName()
    {
        return "Circle";
    }
    void print()
    {
        cout << getName() << ":" << endl;
        cout << "Radius is " << radius << endl;
        printf("Area is %.2f \n", getArea());
        printf("Circumference is %.2f \n\n", getPerimeter());
    }
};
// Derived class
class Rectangle : public Shape
{
public:
    double length;
    double width;
    // constructor to initialize length and width
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }
    // override four virtual(abstract) functions
    double getArea()
    {
        return length * width;
    }
    double getPerimeter()
    {
        return 2 * (length + width);
    }
    string getName()
    {
        return "Rectangle";
    }
    void print()
    {
        cout << getName() << ":" << endl;
        cout << "Length is " << length << endl;
        cout << "Width is " << width << endl;
        printf("Area is %.2f \n", getArea());
        printf("Perimeter is %.2f \n\n", getPerimeter());
    }
};
int main()
{
    Circle circle1(3.50);
    circle1.print();
    Rectangle rect1(3.30, 6.40);
    rect1.print();
    Circle circle2(7.50);
    circle2.print();
    Rectangle rect2(4.20, 8.30);
    rect2.print();
}