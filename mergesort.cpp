 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Merge(int low,int mid,int high,int a[])
{
	//left array is from {low....mid}
	//right array is from {mid+1.....high}
	int left=low,right=mid+1;
	vector<int>temp;
	while(left<=mid&&right<=high)
	{
		if(a[left]<a[right])
		{
			temp.push_back(a[left]);
			left++;
		}
		else
		{
			temp.push_back(a[right]);
			right++;
		}
	}
	//left point crossed the mid then push all the right element
	//right point crossed the high then pufh all the left elements
	while(right<=high)
	{
		temp.push_back(a[right]);
		right++;
	}
	while(left<=mid)
	{
		temp.push_back(a[left]);
		left++;
	}
	//copy temp to array [low] to [high]
	for(int i=low;i<=high;i++)
		{
			a[i]=temp[i-low];
		}
}
int Mergesort(int low,int high,int a[])
{
	if(low==high)
	{
		return 0;
	}
	int mid=(low+high)/2;
	Mergesort(low,mid,a);
	Mergesort(mid+1,high,a);
//this keepon call whem some part become low=high then that part will be
// stopped and then next part will be caalled 
//now its time to conqor them
	Merge(low,mid,high,a);
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
	Mergesort(0,n-1,a);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
