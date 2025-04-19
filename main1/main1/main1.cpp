#include <iostream>
#include "Circle.h"
using namespace std;

bool operator==(const Circle& a, const Circle& b)
{
    return a.radius == b.radius;
}

bool operator>(const Circle& a, const Circle& b)
{
    return a.radius > b.radius;
}



int main() {
    setlocale(LC_ALL, "ru");

    Circle c1(5.0);
    Circle c2(10.0);

    if (c1 == c2) {
        cout << "c1 и c2 равны" << endl;
    }

    else
    {
        cout << "c1 и c2 не равны" << endl;
    }

    if (c1 > c2)
    {
        cout << "c1 больше c2" << endl;
    }

    else
    {
        cout << "c1 меньше c2" << endl;
    }

    return 0;
}