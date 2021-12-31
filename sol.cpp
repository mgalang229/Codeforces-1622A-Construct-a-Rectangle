#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n = 3;
		int l[n];
		for (int i = 0; i < n; i++) {
			cin >> l[i];
		}
		// sort the sequence in non-decreasing order
		sort(l, l + n);
		// check if the two smaller sticks add up to the longest stick
		if (l[0] + l[1] == l[2]) {
			cout << "YES" << '\n';
			continue;
		}
		// check if there are two equal sticks in the sequence
		bool equal = false;
		bool visited[n];
		memset(visited, false, sizeof(visited));
		for (int i = 0; i + 1 < n; i++) {
			if (l[i] == l[i + 1]) {
				equal = true;
				visited[i] = true;
				visited[i + 1] = true;
				break;
			}
		}
		string ans = "NO";
		if (equal) {
			// if there are two equal sticks, then check if the other stick
			// can be divided into two equal sticks
			for (int i = 0; i < n; i++) {
				if (l[i] % 2 == 0 && !visited[i]) {
					ans = "YES";
					break;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}