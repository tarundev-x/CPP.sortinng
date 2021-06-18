#include<iostream>
using namespace std;
int selectionsort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
	 int min_ind=i;
	 for(int j=i+1;j<n;j++)
	 {
	 	if(a[j]<a[min_ind])
	 	{
	 		min_ind=j;
		 }
	 }
	  swap(a[i],a[min_ind]);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];//5 1 2 4 3
	
	for(int i=0;i<n;i++)cin>>a[i];
	selectionsort(a,n);
	cout<<"sorted array="<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
