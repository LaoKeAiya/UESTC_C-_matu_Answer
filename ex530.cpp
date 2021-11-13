#include <iostream>
using namespace std;

namespace nsA{
    int x=1,y=2;
    int add_something(int i){
        return 1+i;
    }
    namespace nsB{
        char x='a',y='b';
        int add_something(int i){
            return 2+i;
        }
    }

}

int main(){

  using namespace nsA;
  cout << x << "," << y << endl;
  cout << nsA::nsB::x << "," << nsA::nsB::y << endl;
  cout << add_something(10) << endl;
  cout << nsA::nsB::add_something(10) << endl;
  system("pause");
  return 0;

}