#include<iostream>
using namespace std;

void expand (char *s ,char *t)
{
    int j=0;
   for(int i=0;s[i] !='\0';i++)
        switch(s[i])
            {
            case'\n':
                t[j++] = '\\';
                t[j++] ='n';
                break;
            case'\t':
                t[j++] = '\\';
                t[j++] ='t';
                break;
            default:
                t[j++] = s[i];
                break;
            }   
    t[j] = '\0';
}

int main(){
    char t[100];
    char s[]="hello,world   helloworld";
    expand(s,t);
    cout<<t<<endl;
    
    system("pause");
    return 0;
}