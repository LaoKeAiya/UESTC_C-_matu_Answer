#include<iostream>
using namespace std;


template<class A,class I>
A get_max(A* x,I y){
    A tmp = x[0];
    for(int j=0;j<y;++j){
        if (x[j]>=tmp)
        tmp = x[j];
    }
    return tmp;
}


int main(){
  int arr_int[6] = { 1, 2, 3, 4, 5, 6 };
  double arr_double[6] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
  cout << get_max(arr_int, 6) << endl;
  cout << get_max(arr_double, 6) << endl;
  system("pause");
  return 0;

}