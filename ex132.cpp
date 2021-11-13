#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s[100];
    int count=0;
    cin.get(s,100);
    int i=0;
    count = strlen(s);
    s[count++]='\\';
    s[count++]='0';
    s[count]='\0';
    cout<<s<<endl;
    

    system("pause");
    return 0;
}