#include<iostream>
using namespace std;

class Cylinder
{
private:
    static double PI;
    double radius;
    double height;

public:
    // Default Constructor
    Cylinder() : radius(0), height(0) {}

    // Parameterized Constructor
    Cylinder(double radius, double height) : radius(radius), height(height) {}

    // Setter for radius
    void setRadius(double radius)
    {
        this->radius = radius;
    }

    // Setter for height
    void setHeight(double height)
    {
        this->height = height;
    }

    // Getter for radius
    double getRadius() const
    {
        return this->radius;
    }

    // Getter for height
    double getHeight() const
    {
        return this->height;
    }

    // Calculate Volume
    double calculateVolume() const
    {
        return PI * radius * radius * height;
    }
};

// Static member initialization
double Cylinder::PI = 3.14;

int main()
{
    Cylinder c1;

    c1.setRadius(3);
    c1.setHeight(6);

    cout << "Radius : " << c1.getRadius() << endl;
    cout << "Height : " << c1.getHeight() << endl;
    cout << "Volume : " << c1.calculateVolume() << endl;

    return 0;
}