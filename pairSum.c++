// Pair Sum problem

#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

bool pairsum(int arr[], int n, int k){
	
	// time - O(n2)
	/*for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]+arr[j]==k){
				cout<<i<<" "<<j<<endl;
				return true;
			}
		}
	}
	return false;
	*/
	
	// time -- O(n)
	
	int low = 0;
	int high = n-1;
	
	while(low<high){
		if(arr[low]+arr[high]==k){
			cout<<low<<" "<<high<<endl;
			return true;
		}
		else if(arr[low]+arr[high]>k){
			high--;
		}
		else{
			low++;
		}
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	
	cout<<pairsum(arr, n, k)<<endl;
	
	return 0;
	
}
