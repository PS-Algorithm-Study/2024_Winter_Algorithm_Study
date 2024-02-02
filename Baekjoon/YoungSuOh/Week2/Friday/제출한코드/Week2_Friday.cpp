#include<bits/stdc++.h>
#define MAX 1000000000
using namespace std;

int main() {
	int N; cin >> N;
	int result = 0;
	vector<int>dp(N+1);
	dp[0] = 0;
	dp[1] = 9; int num = 1;
	for (int i = 2; i <= N; i++) {
		dp[i] = 2*(dp[i - 1]-num)+(1*num);
		num++;
	}
	cout << dp[N] % MAX << "\n";
	return 0;
}