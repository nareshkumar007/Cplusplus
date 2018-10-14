#include<iostream>
using namespace std;
void evenOdd(int number)
{
	if(number%2==0)
	{
		cout<<"Even Number"<<endl;
	}
	else
	{
		cout<<"Odd Number";
	}	  	
}
int main()
{
	int number;
	cout<<"Enter a Number"<<endl;
	cin>>number;
	evenOdd(number);
	
	return 0;
}