#include<iostream>
using namespace std;

void main()
{
	int a,b;
	cin>>a>>b;
	if(b == 0) 
	{
		cout<<"0不能做除数"<<endl;
		return;
	}
	int ant = a / b;
	cout<<ant<<endl;
}