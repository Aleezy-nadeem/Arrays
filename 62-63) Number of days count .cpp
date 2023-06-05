/*Write a program that initialize an array with the name month and contain
size of each month, get a year, month and days from user and calculate the
number of days passed till this date in the year. If the user enter leap year
display it is leap year and add 1 in days?*/
#include<iostream>
using namespace std;
int main()
{
	int M, D, y;
	int sum=0, flag=0;
	cout<<"\nEnter year : ";
	cin>>y;
	if(y%4==0)
		flag++;
	cout<<"\nEnter Number of Month and date :";
	cin>>M>>D;
	M--;
	int day[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		for(int j=0;j<M;j++){
			if(M==0)
				sum=0;
			else
				sum+=day[j];
		}
		if(M>1) {
			if(flag==1)
			sum=sum+D+1; }
		else
		sum+=D;
	cout<<"\nNUmber of days = "<<sum;
}