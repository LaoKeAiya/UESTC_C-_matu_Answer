#include<iostream>
using namespace std;

int main(){
    int n;
	cin >> n;
	if (n % 2 == 0 || n < 1 || n > 80) {
		cout << "error" << endl;
		return 0;
	}
		

	for (int i = 0; i <= n; i=i+2) {
		for (int j = 0; j < i/2 ; j++)
			cout << ' ';
		for (int k = 0; k < n-i; k++)
		cout << "*";
		cout << endl;
	}
    system("pause");
}