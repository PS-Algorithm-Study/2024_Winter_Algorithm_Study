#include<bits/stdc++.h>

using namespace std;
int N, S, M;
queue<int>q;
void solve(deque<int>& volGap, int start, int MAX) {
	vector<int>arr;
	q.push(start);
	while (!volGap.empty()) {
		int next = volGap.front(); volGap.pop_front();
		if (next + q.front() <= MAX) {
			q.push(next + q.front());
		}
		else {
			q.pop();
		}
		if (!q.empty()) {
			if (q.front() - next >= 0) {
				q.push(q.front() - next);
			}
			else {
				q.pop();
			}
		}		
	}
	if (q.empty()) {
		cout << -1 << "\n";
	}
	else {
		while (!q.empty()) {
			arr.push_back(q.front()); q.pop();
		}
		sort(arr.begin(), arr.end());
		int idx = arr.size();
		cout << arr[idx - 1] << "\n";
	}	
}

int main() {
	cin >> N >> S >> M;
	deque<int>volGap;
	for (int i = 0;i < N;i++) {
		int num; cin >> num;
		volGap.push_back(num);
	}
	solve(volGap,S,M);
	return 0;
}