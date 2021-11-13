#include<iostream>
#include<cstdio>
#include"ShapeFactory.h"
#define PI 3.14
using namespace std;

class Triangle:public ShapeFactory {
private:
	float a, b, c;
public:
	Triangle(float aa, float bb, float cc) {
		a = aa;
		b = bb;
		c = cc;
	}
	float Circumstance() {
		return a + b + c;
	}
};

class Quadrilateral :public ShapeFactory {
private:
	float a, b, c, d;
public:
	Quadrilateral(float aa,float bb,float cc,float dd){
		a = aa;
		b = bb;
		c = cc;
		d = dd;
	}
	float Circumstance() {
		return a + b + c + d;
	}
};

class Circle :public ShapeFactory {
private:
	float radius;
public:
	Circle(float r) {
		radius = r;
	}
	float Circumstance() {
		return PI*radius*2;
	}
};


ShapeFactory * ShapeFactory::Create(float a, float b, float c)
{

	ShapeFactory *p = new Triangle(a, b, c);
	return p;
}

ShapeFactory * ShapeFactory::Create(float a, float b, float c,float d)
{

	ShapeFactory *p = new Quadrilateral(a, b, c,d);
	return p;
}

ShapeFactory * ShapeFactory::Create(float r)
{

	ShapeFactory *p = new Circle(r);
	return p;
}
