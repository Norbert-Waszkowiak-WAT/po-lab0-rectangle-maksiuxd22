#include <iostream>

class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h):
    width(w).height(h){};
    void setWidth(double w) {
        width=w;
    }
    void setHeight(double h) {
        height=h;
    }
    double getWidth() const{
        return width
    }
    double getHight() const{
        return height;
    }
    double area() const {
        return width*hight;
    }
    double perimeter() const {
        return 2*(width*hight);
    }
    void display() const{
        cout << "rectangle" << width << " x " << height << endl;
        cout << "Area" << area() << endl;
        cout << "Perimeter" << perimeter();
    }

};