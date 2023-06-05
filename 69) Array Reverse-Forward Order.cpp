/*Write a program that input a value of 10 array element and display them
in forward and reverse order in a single line*/
#include<iostream>
using namespace std;
int main()
{
	int array[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	cout<<"\nForward Order\n";
	for(int i=0; i<10; i++) {
		cout<<array[i]<<"\t";
	}
	cout<<"\nReverse Order\n";
	for(int i=9;i>=0;i--) {
		cout<<array[i]<<"\t";
	}
	return 0;
}