 #include<bits/stdc++.h>
#define _for(i, a, b) for(int (i) = a; (i) < b; i++)
#define _refor(i, a, b) for(int (i) = a; (i) > b; i--)
#include <climits>
#include <vector>
typedef  long long ll;
using namespace std;

const int minutes = 60;
const int hour = 60 * minutes;
const int day = 24 * hour;

int start(){
	int a, b, c;
	scanf("%d:%d:%d", &a, &b, &c);
	int time = a*hour + b*minutes + c;
	return time;
}

int end(){
	int a, b, c, d=0;
	scanf("%d:%d:%d", &a, &b, &c);
	int time = a*hour + b*minutes + c;
	char ch;
	ch = getchar();
	if(ch != '\n'){
		getchar();
		getchar();
		ch = getchar();
		getchar();
		time += (ch-'0')*day;
	}
	return time;
}

void display(int time){
	int a = time/hour;
	time %= hour;
	int b = time/minutes;
	time %= minutes;
	int c = time;
	printf("%02d:%02d:%02d\n", a, b, c);
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int time1 = start();
		int time2 = end();
		int time3 = start();
		int time4 = end();
		int time0 = (time2-time1 + time4-time3) / 2;
		display(time0);
	}
		
 	return 0;	
}

