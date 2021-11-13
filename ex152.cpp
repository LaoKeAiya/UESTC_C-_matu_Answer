#include<iostream>
#include<cstring>
#define PI 3.14
using namespace std;

class Table{
	public:
		Table(float h){
			high=h;
		}
		float GetHigh(){
			return high;
		}
	private:
		float high;
}; 

class Circle{
	public:
		Circle(float r){
			radius=r;
		}
		float GetArea(){
			float a;
			a=PI*radius*radius;
			return a;
		}
	private:
		float radius;
			
};

class RoundTable:public Table,Circle{
	public:
		RoundTable(float r, float h, char *c):Circle(r),Table(h){
			strcpy(this->color,c);
			this->high=h;
			this->radius=r; 
		}
		float GetHigh(){
			return high;
		}
		float GetArea(){
			float a;
			a=PI*radius*radius;
			return a;
		}
		char *GetColor(){
			;
			return color;
		}
	private:
		char color[20];
		float high;
		float radius;
};


int main(){
    float radius,high;
	char color[20];
	cin>>radius>>high>>color;
	
	RoundTable RT(radius,high,color);
	cout<<"Area:"<<RT.GetArea()<<endl;
	cout<<"High:"<<RT.GetHigh()<<endl;
	cout<<"Color:"<<RT.GetColor()<<endl;
	return 0;
}
