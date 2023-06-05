/*: Write a program that input 10 numbers from user in an array and display
weather the number is even or odd, and finally display the numbers of array in
single line with tab(/t) space?*/ 
#include<iostream>
using namespace std;
main(){
	int i, num[10];
	for(i=0;i<10;i++){
		cout<<"\nEnter number -> ";
		cin>>num[i];
		if(num[i]%2==0)
			cout<<"This Number is Even\n";
		else
			cout<<"This Number is Odd\n";
	}
	cout<<"\n\n\n";
	for(i=0;i<10;i++){
		cout<<num[i]<<"\t";
	}
}
