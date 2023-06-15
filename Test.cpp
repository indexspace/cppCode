#include<iostream>
using namespace std;

int maxVal = INT_MIN;
int n;
 
 int main(){
 	
 	while(~scanf("%d", &n)){
 		if(n == 0) {
			cout << maxVal << endl;
			maxVal = INT_MIN; 	
		}
		else if(n > maxVal){
			maxVal = n;
		}
	}
 	
 	return 0;
 }
