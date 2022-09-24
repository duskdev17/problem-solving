#include<iostream>
#define max 100
using namespace std;


int main(int argc, char const *argv[]) {
  int i, j, n, t, p[max], bt[max], wt[max], tat[max];
  float awt=0, atat=0;

  cout << "Enter number of process: ";
  cin >> n;

  cout << "Enter process number: ";
  for(i=0; i<n; i++){
    cin >> p[i];
  }

  cout << "Enter burst time: ";
  for(i=0; i<n; i++){
    cin >> bt[i];
  }


  //sorting
  for(i=0; i<n; i++){
    for(j=0; j<n-i-1; j++){
      if(bt[j]>bt[j+1]){
        t = bt[j];
        bt[j] = bt[j+1];
        bt[j+1] = t;

        t = p[j];
        p[j] = p[j+1];
        p[j+1] = t;
      }
    }
  }

  cout << "Process \t Burst Time \t Waiting Time \t Turn Around Time \n";
  for(i=0; i<n; i++){
    wt[i]=0;
    tat[i]=0;
    for(j=0; j<i; j++){
      wt[i]=wt[i]+bt[j];
    }
    tat[i]=wt[i]+bt[i];
    awt=awt+wt[i];
    atat=atat+tat[i];

    cout << p[i] << "\t" << bt[i] << "\t" << wt[i] << "\t" << tat[i] << endl;
  }

  awt = awt/n;
  atat = atat/n;
  cout << "Average waiting time: " << awt << endl;
  cout << "Average turn around time: " << atat << endl;

  return 0;
}
