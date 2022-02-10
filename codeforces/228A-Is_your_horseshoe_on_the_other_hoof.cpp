#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n=4, array[4], counter = 0;

    for(int i=0; i<n; i++){
        cin >> array[i];
    }

    sort(array[0], array[n]);

    for(int i=0; i<n; i++){
        if(array[i] == array[i+1]){
            counter++;
        }
    }

    cout << 4 - counter << endl;

}
