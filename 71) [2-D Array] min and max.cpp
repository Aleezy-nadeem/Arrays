/*Write a program that input values from user and in two dimentional array, two rows and four columns and display the minimum and maximum number in this array?*/
#include<iostream>
using namespace std;
int main() 
{
	int arr[2][4], min, max;
	for(int i=0; i<2; i++) {
		for(int j=0; j<4; j++) {
			cout<<"\nEnter Values: ";
			cin>>arr[i][j];
		}
	}
	min=max=arr[0][0];
	for(int i=0; i<2; i++) {
		for(int j=0; j<4; j++) {
			if(arr[i][j]<min)
				min=arr[i][j];
			if(arr[i][j]>max)
				max=arr[i][j];
		}
	}
	cout<<"\nMinimum value = "<<min<<"\nMaximum Value = "<<max;
}