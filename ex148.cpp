#include<iostream>
#include<cstring>

using namespace std;

class User {
	char name[100][10];
	char pass[100][10];
	static int User_num;
public:
	User(const char* n, const char* p) {
		int i = 0;
		
		for (i = 0; n[i] != '\0'; i++)name[User_num][i] = n[i];
		name[User_num][i] = '\0';
		for (i = 0; p[i] != '\0'; i++)pass[User_num][i] = p[i];
		pass[User_num][i] = '\0';
		User_num++;
	}
	int login(char* n, char* p)
	{
		int a = User_num;
		int len, find = 1;
			for (int i = 0; i < User_num; i++)
			{
				find = 1;
				len = max(strlen(name[i]), strlen(n));
				for (int j = 0; j < len; j++)
					if (name[i][j] != n[j])
					{find = -1; break;}				
			}

		if (find != -1)
		{
			for (int i = 0; i < User_num; i++)
			{
				find = 1;
				len = max(strlen(pass[i]), strlen(p));
				for (int j = 0; j < len; j++)
					if (pass[i][j] != p[j])
					{	find = -1; break;}
			}

		}
		return find;

	}
	void AddUser(char*n, char*p)
	{
		int i = 0;
		
		for (i = 0; n[i] != '\0'; ++i)name[User_num][i] = n[i];
		name[User_num][i] = '\0';
		for (i = 0; p[i] != '\0'; ++i)pass[User_num][i] = p[i];
		pass[User_num][i] = '\0';
		User_num++;

	}

	
};
int User::User_num = 0;

int main() {
	char name[10], name1[10], pass[10], pass1[10];
	cin >> name >> pass >> name1 >> pass1;
	User user("LiWei", "liwei101");
	user.AddUser(name, pass);
	if (user.login(name1, pass1) >= 0)
	{
		cout << "Success Login!" << endl;
	}
	else {
		cout << "Login failed!" << endl;
	}
	return 0;
}
