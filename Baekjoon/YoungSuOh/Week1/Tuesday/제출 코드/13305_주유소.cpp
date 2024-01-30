#include<bits/stdc++.h>
#define MAX 987654321
using namespace std;

int main() {
	int result = 0;
	long long N, min = MAX; cin >> N;
	vector<int>arr1;
	vector<int>arr2;
	for (int i = 0;i < N - 1;i++) {
		int num; cin >> num;
		arr2.push_back(num); // 도로
	}
	for (int i = 0;i < N;i++) {
		int num; cin >> num;
		arr1.push_back(num);
	}
	int start = 0, temp = 0;
	for (int i = 0;i < N-1;i++) {
		temp += arr2[i];
		if (arr1[start] < arr1[i + 1]) {
			continue;
		}
		else {
			result += temp * arr1[start];
			start = i + 1;
			temp = 0;
		}
	}
	cout << result << "\n";

}