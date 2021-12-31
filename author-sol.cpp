#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int l[3];
		for (int i = 0; i < 3; i++) {
			cin >> l[i];
		}
		// check if two sticks add up to the remaining stick
		bool checker = false;
		for (int i = 0; i < 3; i++) {
			checker |= (l[i] == l[(i + 1) % 3] + l[(i + 2) % 3]);
		}
		// check if one stick can be divided into two equal sticks
		// and the remaining two sticks must be equal
		for (int i = 0; i < 3; i++) {
			if (l[i] % 2 == 0) {
				checker |= (l[(i + 1) % 3] == l[(i + 2) % 3]);
			}
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
