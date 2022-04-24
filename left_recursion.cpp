#include<iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string str[100], leftString;
	
	cout << "Number of String n = ";
	cin >> n;
	
	cin >> leftString;	
	
	for(int i=0;i<n; i++){
		cin >> str[i];
	}
	
	for(int i=0;i<n; i++){
		
		cout << "Production " << i+1 << ": ";
		
		if(str[i][0] == leftString[0]){
			cout << "LR" << endl;
		}

		else{
			cout << "NLR" << endl;
		}
	}
	
	
}
