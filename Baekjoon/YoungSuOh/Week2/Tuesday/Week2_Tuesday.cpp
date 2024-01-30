#include<bits/stdc++.h>
#define MAX 10000001
using namespace std;

bool isPrime[MAX];

void erathos() {
	for (int i = 0;i < MAX;i++) { 
		isPrime[i] = true;
	}
	isPrime[0] = false;
	isPrime[1] = false;
	for (int i = 2;i < MAX;i++) {
		if (isPrime[i]==false) continue;
		for (int j = i + i;j < MAX;j += i) {
			isPrime[j] = false;
		}
	}
}
void solve(int n) {
	int num = n / 2; 
	for (int i = num;i >= 0;i--) {
		if (isPrime[i] == true) {
			for (int j = num;j < n;j++) {
				if (isPrime[j] && i + j == n) {
					cout << i << " " << j << "\n"; return;
				}
			}
		} 
	}
}

int main() {
	int T, n;	
	erathos();
	cin >> T;
	while (T--) {
		cin >> n;
		solve(n);
	}
}