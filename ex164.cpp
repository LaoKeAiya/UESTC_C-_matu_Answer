#include"Location.h"
#include<iostream>
using namespace std;

Location& Location:: operator +(Location &offset){
    x+=offset.getX();
    y+=offset.getY();
    return *this;
}

Location& Location:: operator -(Location &offset){
    x-=offset.getX();
    y-=offset.getY();
    return *this;

}

int main(){
    Location L1(1,1),L2(2,2);
    L1 =L1+L2 ;//L1为（3,3）
    cout<<L1.getX()<<endl;
    cout<<L1.getY()<<endl;
    system("pause");
    return 0;
}