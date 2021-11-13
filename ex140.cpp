#include "Clock.h"
#include <iostream>
using namespace std;
Clock::Clock(int h,int m, int s){
	if(h < 0 || h >= 24)hour = 0;
	else hour = h;
	if(m < 0 || m >= 60)minute = 0;
	else minute = m;
	if(s < 0 || s >= 60)second = 0;
	else second = s;
	
}
void Clock::SetAlarm(int h,int m, int s){
	if(h > 24)hour = 0;
	else Ahour = h;
	if(m > 60)minute = 0;
	else Aminute = m;
	if(s > 60)second = 0;
	else Asecond = s;
}

void Clock::run(){
	second++;
	if(second >= 60)second = 0, minute++;
	if(minute >= 60)minute = 0, hour++;
	if(hour >= 24) hour = 0;
	if((hour == Ahour && minute == Aminute && second == Asecond))
	cout << "Plink!plink!plink!..." << endl;
}

int main(){
	Clock c(2,3,4);
	c.ShowTime();
	c.SetAlarm(2,3,5);
	c.run();
}
