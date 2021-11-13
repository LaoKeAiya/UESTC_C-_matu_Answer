#include"CDate.h"
using namespace std;

	Date::Date(int y, int m, int d)
	{
		if (m<1 || m>12)
		{
			cout << "Invalid month!" << endl;
			m = 1;
		}
		if (d<1 || d>31)
		{
			cout << "Invalid day!" << endl;
			d = 1;
		}
		if (d >= 1 && d <= 31)
		{
			if (m == 2)
			{
				if (d>29)
				{
					cout << "Invalid day!" << endl;
					day = 1;
				}
				if (d <= 29)
				{
					if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
					else if (d == 29)
					{
						cout << "Invalid day!" << endl;;
						d = 1;
					}
					year = y;
					month = m;
					day = d;
				}
			}
			else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			{
				year = y;
				month = m;
				day = d;
			}
			else
			{
				if (d == 31)
				{
					cout << "Invalid day!" << endl;
					d = 1;
				}
				if (d<31)
				{
					year = y;
					month = m;
					day = d;
				}
			}
		}
	};
	void Date::NewDay()
	{
		day=day+1;
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(day>31)
				{
					day=1; month=month+1;
				}break;
			case 4:
			case 9:
			case 11:
			case 6:
				if(day>30)
				{
					day=1;month++;
				}break;
			case 2:
				if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)&&day>29)
				{
					day=1; month++;
				}
				else if(day>28)
				{
					day=1;
					month++;
				}
				
		}
		if(month>12)
		{
			year++;
			month=1;
		}
	}

	int Date::days(int year, int month)
	{
		int num;
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			num = 31; break;
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				num = 29;
			else
				num = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			num = 30;
			break;
		default:
			num = 31;
		}
		return num;
	}
	
