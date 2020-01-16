#include<iostream>
using namespace std;
int main()
{
	int num,i,flag=0;
	cout << "Enter the Positive number" << endl;
	cin >> num;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		flag=1;
	}
	if(flag==0)
	cout << "The given number is a prime number"<<endl;
	else
	cout << "The given number is not a prime number"<<endl;
	return 0;
}
