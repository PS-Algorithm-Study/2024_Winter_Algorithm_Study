#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<long long> dist(N - 1);
    vector<long long> price(N);

    for (int i = 0; i < N - 1; i++) {
        cin >> dist[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> price[i];
    }

    long long result = 0, minPrice = price[0];
        
    for (int i = 0; i < N - 1; i++) {
        minPrice = min(minPrice, price[i]);
        result += minPrice * dist[i];
    }

    cout << result << "\n";
}
