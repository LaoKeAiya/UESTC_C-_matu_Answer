#include<iostream>
#include<iomanip>
using namespace std;

int main(){
   double i=1;
   long count=0;
   double p=0;
   while(1/i>=1e-8){
      if((count+1)%2==0)
         p-=1/i;
      else
         p+=1/i;
      i+=2;
      count++;
   }
   p*=4;
   cout<<"steps="<<count+1<<" PI="<< setprecision(6) <<p;
   system("pause");
   return 0;
   
}