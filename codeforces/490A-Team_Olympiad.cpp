#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, arr[100], s;

    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    s = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + s);  



}