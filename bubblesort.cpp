#include<iostream>
using namespace std;
int count=0;
int bubblesort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int flag=0;
			count ++;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}

	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bubblesort(a,n);
	cout<<"Bubble sorted array is:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n"<<count;

}
