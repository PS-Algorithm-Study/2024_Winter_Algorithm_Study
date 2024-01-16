#include<bits/stdc++.h>

using namespace std;
int N, K;
vector<int>arr(100000, 1000001);
queue<pair<int, int>>q;
void bfs(int src, int dest) {
	int result = 100001;
	while (!q.empty()) {
		int cur = q.front().first;
		int tim = q.front().second;
		q.pop();
		if (tim > dest - cur)continue;
		if (cur - 1 < 0 || cur < 0 || cur>100000 || cur + 1 > 100000) continue;
		if (cur == dest) {
			if (tim < result) {
				result = tim;
			}
		}
		if (tim + 1 < arr[cur + 1]) {
			arr[cur + 1] = tim + 1;
			q.push({ cur + 1 , tim + 1 });
		}
		if (tim + 1 < arr[cur - 1]) {
			arr[cur - 1] = tim + 1;
			q.push({ cur - 1 , tim + 1 });
		}
		if (tim < arr[cur * 2]) {
			arr[cur * 2] = tim;
			q.push({ cur * 2 , tim });
		}
	}
	cout << result << "\n";
}

int main() {
	cin >> N >> K;

	q.push({ N,0 });
	bfs(N, K);
}