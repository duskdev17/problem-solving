#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int T;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    int N, K;
    cin >> N >> K;
    int t[N];
    for (int j = 0; j < N; j++) {
      cin >> t[j];
    }
    sort(t, t + N);
    int ans = 0;
    for (int j = 0; j < K; j++) {
      ans += t[j];
    }
    cout << "Case " << i << ": " << ans << endl;
  }
  return 0;
}

