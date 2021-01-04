// sum of subArrays - google kickStart
#include"bits/stdc++.h"
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	int crntSum = 0;
	for(int i=0; i<n; i++)
	{
		crntSum=0;
		for(int j=i; j<n; j++)
		{
			crntSum += arr[j];
			cout<< crntSum <<endl;
		}
	}
	return 0;
}
