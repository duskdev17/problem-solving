#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	string n1, n2;
	
	cin >> n1;
	cin >> n2;
	
	n = n1.size();
	
	for(int i=0; i< n; i++){
		if(n1[i] == n2[i]){
			cout << "0" ;	
		}
		else{
			cout << "1";
		}
	}
	
}
