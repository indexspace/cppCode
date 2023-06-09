#include<bits/stdc++.h>
#include<limits.h>
#include<iomanip> 
#define _for(i, a, b) for(int (i) = a; (i) < b; i++)
typedef  long long ll;
using namespace std;


const ll LEN = 30;
ll n, sum;
ll ans[LEN];

void DFS(int, int);

int main(){

	cin >> n;
	
	DFS(1, 0);
			
 	return 0;	
}

void DFS(int i, int sum) {
	
	ans[0] = 1;
	
	_for (k, ans[i-1], n) { 
		ans[i] = k;
		sum += ans[i];
		if (sum == n) {
			cout << ans[1];
			if (2 <= i) {
				_for(j, 2, i+1) {    // j : 1 -> i  ???
					cout <<  "+"  << ans[j];
				}
			}
			cout << endl;
		}
		else if (sum > n) {
			return;
		}
		else {
			DFS(i+1, sum);
		}
		sum -= ans[i];
	}
} 

