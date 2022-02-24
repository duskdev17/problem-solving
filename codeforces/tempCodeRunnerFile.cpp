#include<iostream>
using namespace std;

int main(){
    int n; 

    cout <<  "Enter a number: ";
    cin >> n; 
    
    if(n=0 || n=1){
        cout << n << "is not a prime number." << endl;
    }

    for(int i=2; i<n/2; i++){
        if(n%i==0){
            cout << n << "is not a prime number." << endl;
        }
        else{
            cout << n << "is a prime number." << endl;
        }
    }

    return 0;

}