/* Write a program that input 10 integer from user in an array and calculate the sum and
 average of these numbers */
#include<iostream>
using namespace std;
main()
{
	int i, n[10], sum=0;
	float avg;
	for(i=0;i<10;i++){
		cout<<"\nEnter Number-> ";
		cin>>n[i];
		sum+=n[i];
	}
	avg=sum/10.0;
	cout<<"\nSum = "<<sum<<"\nAverage of = "<<avg;
	
}