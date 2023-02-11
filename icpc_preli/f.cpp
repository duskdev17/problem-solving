#include<iostream>
#include <string.h>
#define size 1200
using namespace std;

int main(){
	int n, tsday[size], tsmonth[size], tsyear[size], hour[size],
	mint[size], second[size], day[size], month[size], year[size], bgCount=0;
	
	string email[size], slash, bg[size];
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> tsday[i] >> slash >> tsmonth[i] >> slash >> tsyear[i] >> slash >> hour[i] >> slash >> mint[i] >> slash >> second[i] >> email[i] >> day[i] >> slash >> month[i] >> slash >> year[i] >> bg[i];
		if(bg[i] == "A+"){
			bgCount++;
		}
	}

	string bgG = "A+";
	for(int i=0; i<n; i++){
		if(bg[i] == "A+"){
			bgCount++;
		}	
	}
	
	cout << bgCount ;
	
	
}
