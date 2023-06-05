/*Write a program that input values from user in 2-dimentional array of size five into five at the end program will display how much number is even and odd number*/
#include<iostream>
using namespace std;
int main() 
{
	int arr[5][5], E=0, O=0;
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			cout<<"\nEnter Values: ";
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			if(arr[i][j]%2==0)
				++E;
			else
				++O;
		}
	}
	cout<<"\nNumber of Even Numbers = "<<E<<"\nNumber of odd numbers = "<<O;
	return 0;
}