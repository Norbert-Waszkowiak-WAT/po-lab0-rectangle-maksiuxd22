#include <iostream>
using namespace std;
class Rectangle {
    private:
    double width;
    double height;
    public:
    Rectangle(double w, double h)
    : width(w), height(h){};
    void setWidth(double w){
        width=w;
    }
    void setheight(double h){
        height=h;
    }
double getwidth() const{
    return width;
}
double getheight()const{
    return height;
}
double area()const{
    return width*height;
}
double perimeter() const{
    return 2*(width+height);
}
void display(double w, double h) const {
		cout <<"Rectangle " << width << " x " << height << endl;
		cout <<"Area " << area() << endl;
		cout <<"Perimeter "<< perimeter() << endl;
}
};