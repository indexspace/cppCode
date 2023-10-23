#include<iostream>
using namespace std;
typedef long long ll;

char HEX[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

int main(){
	
	ll n;
	string ans = "";
	
	cin >> n;
	while(n){
		ans = HEX[n % 16] + ans;
		n /= 16;
	}
	cout << ans << endl;
		
	return 0;
}
