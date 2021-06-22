#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={5,3,2,6,1};
	sort(a,a+5);//sort form first element address to a+5-last next element address of the array 
        sort(a,a+5,greator<int>());//sort in descending order
	for(int i=0;i<5;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	vector<int>ve={5,3,2,6,1};
	sort(ve.begin(),ve.end());
	for(auto it:ve)
	cout<<it;
	return 0;
}
//generally the time complexity of any sorting function is o(nlogn)-least     o(n^2)-worst case
