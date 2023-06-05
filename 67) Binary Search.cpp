//Binary Search.
#include<iostream>
using namespace std;
int main()
{
	int ar[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int mid,  s, e, loc, n;
	loc=-1;
	s=0;
	e=9;
	cout<<"Enter Number for searching: ";
	cin>>n;
	while(s<=e) {
		mid=(s+e)/2;
		if(ar[mid]==n){
			loc=mid;
			break;
		}
		else if(n>ar[mid]) {
			s=mid+1;
		}
		else {
			e=mid-1;
		}
	}
	if(loc==-1)
		cout<<"\nSearch Completed----Number not found.";
	else 
		cout<<"\nElement found at: "<<loc;
	return 0;
}