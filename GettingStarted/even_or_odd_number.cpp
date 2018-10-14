#include<iostream>
using namespace std;
void evenOdd(int number)
{
	cout << ((number%2==0) ? "Even Number" : "Odd Number");
}
int main()
{
	int number;
	cout<<"Enter a Number"<<endl;
	cin>>number;
	evenOdd(number);
	
	return 0;
}
