#include <bits/stdc++.h>

using namespace std;

void test_case() {
	long long n, k;
	cin >> n >> k;
	cout << (k * k <= n && n % 2 == k % 2 ? "YES" : "NO") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T = 1;
	cin >> T;
	for(int tc = 0; tc < T; tc++) {
		test_case();
	}
}
