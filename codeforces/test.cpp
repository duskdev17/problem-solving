#include<iostream>
using namespace std;

int main(){
	int n=0;

  cout << "Enter the upper bound: ";
  cin >> n; 

  for(int i=2; i<=n; i++){
    if(n%i!=0){
      cout << i << "  ";
    }
  }
  
  
}
