#pragma once

class Circle
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    friend bool operator==(const Circle& a, const Circle& b);
    friend bool operator>(const Circle& a, const Circle& b);
};