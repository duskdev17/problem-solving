#include<iostream>
using namespace std;

int main(){
	int n, a[100], flag=0;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	for(int i =0; i< n; i++){
		if(a[i] == 0)
			flag = 0;
		else
			flag = 1;
	}
	
	if(flag = 1){
		cout << "HARD" ;
	}
	else{
		cout << "EASY";
	}
	
}
