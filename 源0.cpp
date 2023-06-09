#include<bits/stdc++.h>
#include<limits.h>
#include<iomanip> 
#define _for(i, a, b) for(long long (i) = a; (i) < b; i++)
typedef  long long ll;
using namespace std;


const ll LEN = 10000;
ll n, sum, count;
ll ans[LEN];

bool isPrime(ll n) {
	for(int i = 2; i*i<= n; i++) {
		if(n%i == 0) {
			return false;
		}
	}
	return true;
}

int DFS(int i, int sum, int count) {
	ans[0] = 1;
	_for(j, ans[i-1], n) {
		if(isPrime(j) == false) continue;
		ans[i] = j;
		sum += ans[i];
		if(sum == n) {
			_for(k, 1, n+1){
				cout << "+" << ans[i];
			}
			cout << endl;
			return ++count;
		}
		else if(sum > n) {
			return count;
		}
		else {
			count = DFS(i+1, sum, count);
		}			
		sum -= ans[i];
	}
} 


int main(){
	
	n = 2019;

	cout << DFS(1, 0, 0) << endl;
	
} 

