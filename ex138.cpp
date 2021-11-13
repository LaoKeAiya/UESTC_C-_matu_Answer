#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float x1,y1,x2,y2;
    double dis;
    cin>>x1>>y1>>x2>>y2;
    dis=sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
    cout<<dis<<endl;

    system("pause");
    return 0;
}