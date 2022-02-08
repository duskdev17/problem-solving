/*
#include<iostream>
using namespace std;

int main(){
	int n, total =0;
	
	cin >> n; 
	
	for(int i=1; i<=n; i++){
			if(i%2!=0){
				total = total - i;
			}
			else{
				total = total + i;
			}
	}
	
	cout <<  total;
}
*/

#include<iostream>
using namespace std;

int main(){
	int n, result =0;
	
	cin >> n; 
	
	if(n%2==0){
		result = n/2;
	}
	else{
		result = -(n+1)/2;
	}
		
	cout <<  result;
}
