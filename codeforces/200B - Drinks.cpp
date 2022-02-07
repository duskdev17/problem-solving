#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double n, percentage[100];
	double temp;

    cin >> n;

    for(int i=0; i<n; i++){
      cin >> percentage[i];
    }

    for(int i=0; i<n; i++){
      temp = temp + percentage[i]/n;
    }

    cout << setprecision(12) << temp;

  }
