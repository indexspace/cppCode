#include<bits/stdc++.h>
#define _for(i, a, b) for(int (i) = a; (i) < b; i++)
typedef long long ll;
using namespace std;

int partition(vector<int>& nums, int l, int r){
	int temp = l;
	while(l<r){
		while(l<r && nums[temp]<=nums[r]) r--;
		while(l<r && nums[l]<=nums[temp]) l++;
		swap(nums[l], nums[r]);
	}
	swap(nums[temp], nums[l]);  
	return l;  
}

void quick_sort(vector<int>& nums, int l, int r){
	if(l>=r){
		return;
	}    
	int m = partition(nums, l, r);	
	quick_sort(nums, l, m-1);
	quick_sort(nums, m+1, r);
}


int main(){

	int nums[] = {28, 15, 23, 4, 25, 9, 12, 16, 19, 29, 25, 3, 4, 7, 13, 13};
	vector<int> arr(nums, nums+sizeof(nums)/sizeof(int));
	
	_for(i, 0, arr.size()){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	quick_sort(arr, 0, arr.size()-1);
	
	_for(i, 0, arr.size()){
		cout << arr[i] << " ";
	}

	return 0;
} 
