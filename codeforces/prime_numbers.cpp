#include<iostream>
using namespace std;

int main(){
    int n; 
    bool isPrime = false;

    cout <<  "Enter a number: ";
    cin >> n; 
    
    if(n==0 || n==1){
        isPrime = false;
    }
    else{
        for(int i=2; i<=n/2; i++){
                if(n%i==0){
                    isPrime = false;
                    break;
                }
                else{
                    isPrime = true;
                    break;
                }
            }
    }
    

    if(isPrime = false){
        cout << n << " is not a prime number." << endl;
    }
    else{
        cout << n << " is a prime number." << endl;
    }

    return 0;

}