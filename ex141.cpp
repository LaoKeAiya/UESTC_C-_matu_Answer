#include<iostream>
using namespace std;

class Student
{private:
	char *name;
	char *num;
	int grade[3];
	static int Stu_num;
	static int sum1;
	static int sum2;
	static int sum3;
public:
	Student(char* na, char* nu, int g1, int g2, int g3)
	{
		this->name = na;
		this->num = nu;
		this->grade[0] = g1;
		this->grade[1] = g2;
		this->grade[2] = g3;
		this->sum1 += g1;
		this->sum2 += g2;
		this->sum3 += g3;
		this->Stu_num++;

	}
	void display()
	{
		cout << num << " " << name << " " << grade[0] << " "
			<< grade[1] << " " << grade[2] << endl;
	}

	double average1()
	{
		 double average = (double)sum1 / Stu_num;;
		 return average;

	}
	double average2()
	{
		double average = (double)sum2 / Stu_num;;
		return average;
	}
	double average3()
	{
		double average = (double)sum3 / Stu_num;;
		return average;
	}

};
int Student::Stu_num = 0;
int Student::sum1 = 0;
int Student::sum2 = 0;
int Student::sum3 = 0;



int main() {
	Student* stu1, * stu2, * stu3;
	char num1[10], num2[10], num3[10];
	char name1[12], name2[12], name3[12];
	int grade1[3], grade2[3], grade3[3];
	cin >> num1 >> name1 >> grade1[0] >> grade1[1] >> grade1[2];
	cin >> num2 >> name2 >> grade2[0] >> grade2[1] >> grade2[2];
	cin >> num3 >> name3 >> grade3[0] >> grade3[1] >> grade3[2];
	stu1 = new Student(name1, num1, grade1[0], grade1[1], grade1[2]);
	stu2 = new Student(name2, num2, grade2[0], grade2[1], grade2[2]);
	stu3 = new Student(name3, num3, grade3[0], grade3[1], grade3[2]);

	stu1->display();
	stu2->display();
	stu3->display();

	cout << "The average grade of course1:" << stu2->average1() << endl;
	cout << "The average grade of course2:" << stu2->average2() << endl;
	cout << "The average grade of course3:" << stu2->average3() << endl;
	return 0;
}
