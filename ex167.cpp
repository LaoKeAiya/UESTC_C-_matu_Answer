#include"Shape.h"
using namespace std;

class Rectangle:public Shape{
private:
    double length,width;

public:
    Rectangle(double l,double w){
        length=l;
        width=w;
    }

    double GetArea(){
        return length*width;
    }

    double GetPerimeter(){
        return (length+width)*2;
    }
};

class Circle:public Shape{
private:
    double radius;

public:
    Circle(double r){
        radius=r;
    }

    double GetArea(){
        return 3.14*radius*radius ;
    }

    double GetPerimeter(){
        return 3.14*2*radius;
    }
};

Shape * Shape::createRectangle(double l,double w){
    return new Rectangle(l,w);
}

Shape * Shape::createCircle(double r){
    return new Circle(r);
}