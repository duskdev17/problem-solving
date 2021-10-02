//	118A - String Task
#include<iostream>
using namespace std;

int main() {
	char str[100000];

	cin >> str;
	int n = strlen(str);

	for (int i = 0; i < n; i++) {
		if (str[i] < 97) {
			str[i] = str[i] + 32;
		}
	}

	for (int i = 0; i < n; i++) {
		if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y') {
			cout << ".";
			cout << str[i];
		}
	}
}