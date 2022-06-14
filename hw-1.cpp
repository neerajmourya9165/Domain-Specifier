#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s[20];
	int i,l;
	cout<<"Enter Website name:"<<endl;
	cin>>s;
	l=strlen(s);
	for(i=4;i<l-4;i++)
	{
		cout<<s[i];
	}
}
