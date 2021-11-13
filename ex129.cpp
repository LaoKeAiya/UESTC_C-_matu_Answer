#include<iostream>
using namespace std;

int main(){
    int year,month,days=31,isyear=0;
    cin>>year>>month;
    month%=12;
    if(month==0)
        month =12;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ){
        isyear = 1;
    }
    switch(month){
        case 2:
            if(isyear)
                days=29;
            else
                days=28;
            break;
        case 4:
        case 6:
        case 8:
        case 11:
            days=30;
            break;
    }
    cout<<"days:"<<days;
    system("pause");
    return 0;
}


