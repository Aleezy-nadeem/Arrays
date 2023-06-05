/* Write a program that input 10 integers in an array from user in an
unsorted form and then request a user to enter a number to search in this
array by using sequential search if the element found program will return the
location of array where that element is available if element does not found it
will display the number is not found*/
#include<iostream>
using namespace std;
int main()
{
	int num[10];
	int n, loc=-1;
	for(int i=0;i<10;i++) {
		cout<<"\nenter Values in Array: ";
		cin>>num[i];
	}
	system("cls");
	cout<<"\nEnter Number to search: ";
	cin>>n;
	for(int i=0;i<10;i++) {
		if(n==num[i]) {
			loc=i;
			cout<<"\nElement found and available at location = "<<i;
			exit;
		}	}
	if(loc==-1) {
		cout<<"\nSorry number not found ";
	}
	return 0;
}