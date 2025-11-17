#include <iostream>

using namespace std;
class Rectangle {
private:
    double width;
    double height;
public:

    Rectangle(double w,double h)
    :width(w),height(h) {}

    void setWidth(double w){
        width=w;
    }

    void setHeight(double h){
        height=h;
    }

    double getWidth() const{
        return width;
    }

    double getHeight() const{
        return height;
    }

    double area() const{
        return height*width;
    }

    double perimeter()const{
        return 2*(height+width);
    }

    void display()const{
         
        cout << "Rectangler: " << width<< "x"<<height<<endl;
        cout<<"Area: "<<area()<<endl;
        cout<<"Perimeter:"<<perimeter()<<endl;
        
    }

};