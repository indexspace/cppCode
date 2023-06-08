#include<bits/stdc++.h>
#define _for(i, a, b) for(int (i) = a; (i) < b; i++)
#include <climits>
#include <vector>
typedef  long long ll;
using namespace std;

int const N = 103;

int ans[N] = {0};
int row[N] = {0};
int a[2*N-1] = {0};    // /
int b[2*N-1] = {0};    // 

int DFS(int i, int count, int n){
	
	if(i >= n+1){
		count++;
		if(count <= 3){
			cout << ans[1];
			_for(k, 2, n+1){
				cout << " " << ans[k]; 
			}
			cout << endl;
		}
		return count;
	}
	
	_for(j, 1, n+1){
		if(row[j] == 0 && a[i+j-1] == 0 && b[i-j+n] == 0){
			row[j] = 1;
			a[i+j-1] = 1;
			b[i-j+n] = 1;
			ans[i] = j;
			count = DFS(i+1, count, n);
			row[j] = 0;
			a[i+j-1] = 0;
			b[i-j+n] = 0;
		}
	}
	return count;		
}

int main()
{
  int n;
  cin >> n;
  
  
  cout << DFS(1, 0, n) << endl;
  
  return 0;
}
