#include<bits/stdc++.h>
#define _for(i, a, b) for(int (i) = a; (i) < b; i++)
typedef long long ll;
using namespace std;

void Merge(vector<int>& arr, int l, int m, int r){
	
	vector<int> temp;
	int a = l, b = m+1;   
	while(a<=m && b<=r){                
		temp.push_back(arr[a] >= arr[b] ? arr[b++] : arr[a++]); 
	} 
	while(a<=m){  
		temp.push_back(arr[a++]);
	}
	while(b<=r){
		temp.push_back(arr[b++]);
	}
	_for(i, 0, r-l+1){
		arr[l+i] = temp[i];
	}
 	temp.clear();
}

void merge_sort(vector<int>& arr, int l, int r){
	if(l>=r) return;
	int m = (l+r)/2;
	merge_sort(arr, l , m);
	merge_sort(arr, m+1, r);   // ///
	Merge(arr, l, m, r);
}


int main(){

	int nums[] = {28, 15, 23, 4, 25, 9, 12, 16, 19, 29, 25, 3, 4, 7, 13, 13};
	vector<int> arr(nums, nums+sizeof(nums)/sizeof(int));
	
	_for(i, 0, arr.size()){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	merge_sort(arr, 0, arr.size()-1);
	
	_for(i, 0, arr.size()){
		cout << arr[i] << " ";
	}

	return 0;
} 
