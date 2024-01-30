#include<bits/stdc++.h>

using namespace std;

bool func1(int num) {
	if (num < 2) return false;
	for (int i = 2;i < num;i++) {
		if (num % i == 0) return false;
	}
	return true;

}
bool func2(int num) {
	string str = to_string(num);
	int len = str.length();
	bool flag = true;
	for (int i = 0;i < str.length();i++) {
		if (len == i || len < i) {
			break;
		}
		if (str[i] != str[len - 1]) {
			flag = false;
			break;
		}
		len--;
	}

	return flag;
}

int main() {
	int N; cin >> N;
	for (int i = N;;i++) {
		if (func1(i) && func2(i)) {
			cout << i << "\n"; break;
		}
	}
	return 0;
}