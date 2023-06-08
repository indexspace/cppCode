#include<bits/stdc++.h>
#include<limits.h>
#include<iomanip> 
#define _for(i, a, b) for(int (i) = a; (i) < b; i++)
typedef  long long ll;
using namespace std;


const ll LEN = 20001;
ll n;
ll nums[LEN]={0};
ll sums[LEN]={0};
ll ans = LLONG_MIN;


int main(){

	cin >> n;
	_for(i, 1, n+1) {
		cin >> nums[i];
		if (i == 1 || sums[i-1] < 0) sums[i] = nums[i];
		else {
			sums[i] = sums[i-1] + nums[i];
		}
		ans = (ans > sums[i]) ? ans : sums[i];
	}
	
	cout << ans << endl;
			
 	return 0;	
}

