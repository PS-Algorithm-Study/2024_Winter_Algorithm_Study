#include<bits/stdc++.h>

using namespace std;
int N, start, M;
int volume[51];
int dp[51][1001];

int main() {
	cin >> N >> start >> M;
	for (int i = 1;i <= N;i++) {
		cin >> volume[i];
	}

	dp[0][start] = 1;
	int change;

	for (int i = 1;i <= N;i++) {
		for (int j = 0;j <= M;j++) {
			if (dp[i - 1][j] == true) {
				change = j + volume[i];
				if (change <= M) {
					dp[i][change] = 1;
				}
				change = j - volume[i];
				if (change >= 0) {
					dp[i][change] = 1;
				}
			}
		}
	}
	for (int i = M;i >= 0;i--) {
		if (dp[N][i]) {
			cout << i << "\n"; return 0;
		}
	}
	cout << -1 << "\n";
	return 0;
}