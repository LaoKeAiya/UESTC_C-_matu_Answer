#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c;
    int perimeter;
    cin>>a>>b>>c;
    perimeter=a+b+c;
    double p=(a+b+c)/2.0;
    double area=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"Ctriangle:a="<<a<<",b="<<b<<",c="<<c<<endl;
    cout<<"Perimeter:"<<perimeter<<endl;
    cout<<"Area:"<<area<<endl;

    system("pause");
    return 0;

}