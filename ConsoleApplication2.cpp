#include <iostream>
using namespace std;

/* class Shape {
protected:
    int width, height;
public:
    void setWidth(int w) {
        width = w;
    }
    void setheight(int h) {
        height = h;
    }
};
class Paintcost{
public:
    int getCost(int area) {
        return area * 70;
    }
};

class Rectangle : public Shape, public Paintcost {
public:
    int getArea() {
        return (width * height);
    }
};
int main(void) {
    Rectangle Rect;
    int area;

    Rect.setWidth(5);
    Rect.setheight(20);

    area = Rect.getArea();
    cout << "Total area: " << area << "\n";
    cout << "Total paint cost: $" << Rect.getCost(area);
    return 0;

}
*/
/* class Add {
private:
    int total;
public:
    // constructor
    Add(int i = 0) {
        total = i;
    }
    void addnum(int number) {
        total += number;
    }
    int getTotal() {
        return total;
    }

};
int main() {
    Add a;
    a.addnum(10);
    a.addnum(20);
    cout << "Total: " << a.getTotal();
    return 0;
}
*/

/* class Vehicle {
public:
    Vehicle() {
        cout << "This is a vehicle. ";
    }
};
class Fourwheeler : public Vehicle {
public:
    Fourwheeler() {
        cout << "I have two sets of driven wheels.";
    }
};
class Car : public Fourwheeler {
public:
    Car() {
        cout << "Ofcourse I'm an car.";
    }
};

int main() {
    Car obj;
    return 0;
}
*/

// Hybrid inheritance
class Vehicle {
public:
    Vehicle() {
        cout << "This is a vehicle. ";
    }
};
class Fare {
public:
    Fare() {
        cout << "fare of vehicle  \n";
    }
};
class Car : public Vehicle {

};
class Bus : public Vehicle, public Fare {

};
int main() {
    Bus obj2;
    return 0;
}

