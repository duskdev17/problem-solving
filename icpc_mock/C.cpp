#include<iostream>
using namespace std;

int main(){
	int testcase, numScore, score[100], queryNum, qnum[100], x, y, pen, index, winner=0;
	
	cin >> testcase;
	
	for(int i=0; i<testcase; i++){
		cin >> numScore;
		
		for(int j=0; j<numScore; j++){
			cin >> score[j];
			
			if(score[j]>score[j+1]){
				
				score[j] = score[j] + score[j+1];
				winner = j;
				j++;
			}
			else{
				j++;
			}
		}
		
		cin >> queryNum;
		
		cin >> qnum[0] >> x >> y;
		cin >> qnum[1] >> pen;
		cin >> qnum[2] >> index;
		
		cout << winner << score[winner];
		
	}
	
	
	
	
	
}
