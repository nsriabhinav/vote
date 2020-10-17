#include <iostream>
using namespace std;
int main()
{
	int age = 0;
	cout<<"enter your age :";
	cin>>age;
	if(age>=18)
	{
		cout<<"\nyou are eligible to vote";
	}
	else{
		cout<<"\nyou are not eligible to vote";
	}
	return 0;
}
