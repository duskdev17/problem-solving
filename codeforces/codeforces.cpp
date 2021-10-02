//510A - Fox And Snake
#include<iostream>
using namespace std;

int main() {
	int m, n, count = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 1) {
			if (count % 2 != 0) {
				cout << "#";
				for (int i = 0; i < m - 1; i++) {
					cout << ".";
				}
				cout << endl;
			}
			else {
				for (int i = 0; i < m - 1; i++) {
					cout << ".";
				}
				cout << "#" << endl;
			}
			count++;
		}
		else {
			for (int i = 0; i < m; i++) {
				cout << "#";
			}
			cout << endl;
		}
	}
}	