#include<bits/stdc++.h>
#define MAX 1000000000
using namespace std;

int main() {
	int N; cin >> N; 
	int result = 0;
	for (int i = pow(10, N - 1); i < pow(10, N); i++) {
		string str = to_string(i);
		bool flag = true;
		for (int j = 0; j < N - 1; j++) {
			if (abs(str[j] - str[j + 1]) != 1) {
				flag = false; break;
			}
		}
		if (flag) result++;
	}
	cout << result % MAX << "\n";
	return 0;
}