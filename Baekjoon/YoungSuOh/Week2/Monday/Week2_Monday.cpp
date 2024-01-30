#include<bits/stdc++.h>
#define MAX 1003002
using namespace std;

bool isPrime[MAX];
int N;

void erathos() {
	memset(isPrime, true, sizeof(isPrime));
	isPrime[0] = false;
	isPrime[1] = false;

	for (int i = 2;i < MAX;i++) {
		if (!isPrime[i]) continue;
		for (int j = i+i;j < MAX;j += i) {
			isPrime[j] = false;
		}
	}
}
bool isPalin(int num) {
	string str = to_string(num);
	int len = str.length();
	bool flag = true;
	for (int i = 0, j=len-1;i < len/2;i++,j--) {
		if (str[i] != str[j]) return false;
	}
	return flag;
}

int main(){
	cin >> N; 
	erathos();
	for (int i = N;;i++) {
		if (!isPrime[i]) continue;
		if (isPalin(i)) {
			cout << i << "\n"; break;
		}
	}
	return 0;
}