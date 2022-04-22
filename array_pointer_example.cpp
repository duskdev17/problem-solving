#include <iostream>

using namespace std;

void display(int **arr, int m, int n)
{
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cout << *(*(arr+i)+j) << " " << arr[i][j] << endl;
}

int main()
{
    int arr[][3] = {{1,2,3},{4,5,6}};
    int *temp[2];
    for(int i=0; i<2; i++)
        temp[i] = *(arr+i);
    display(temp,2,3);
}
