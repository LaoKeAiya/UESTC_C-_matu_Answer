#include<iostream>
using namespace std;

int main(){
    int ans = 1;
    int i = 1;
    int n;
    cin>>n;
    if(n>12){
        n = 12;
    }
    while(i<=n){
        ans*=i;
        i++;
    }
    cout<<n<<"!="<<ans<<endl;
    system("pause");

    return 0;
}