#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class String{
private:
	char *mystr;    //字符串
	int len;    //字符串长度
public:
	String(){
		len =0;
		mystr =NULL;
	}
	String(const char* p){
		len = strlen(p);
		mystr = new char[len+1];
		strcpy(mystr,p);
	}
	String(String &s){
		len = s.len;
		if (len !=0)
		{
			mystr = new char[len+1];
			strcpy(mystr,s.mystr);
		}
	}
	~String(){
         if (mystr != NULL)
         {
			 delete []mystr;
			 mystr =NULL;
			 len = 0;
         }
	}

	char *GetStr(){return mystr;}
	void ShowStr(){cout<<mystr;}

    bool IsSubstring(const char *str);
	bool IsSubstring(const String &str);
	int str2num();
	void toUppercase();
};


bool String::IsSubstring(const char *str){
    int tmp;
    string stri=mystr;
    string substri=str;
    tmp=stri.find(substri);
    if(tmp==string::npos)
        return false;
    return true;

}


bool String::IsSubstring(const String &str){
    int tmp;
    string stri = mystr;
    string substri = str.mystr;
    tmp=stri.find(substri);
    if(tmp==string::npos)
        return false;
    return true;    
}


int String::str2num(){
    int result=0;
    int i=0;
    while(mystr[i]!='\0'){
        if('0'<=mystr[i]&&'9'>=mystr[i])
            result=result*10+(mystr[i++]-'0');
    }
    return result;
}


void String::toUppercase(){
    for(int i=0;mystr[i]!='\0';i++){
        if(mystr[i]>='a'&&mystr[i]<='z')
            mystr[i]-=32;
    }
}