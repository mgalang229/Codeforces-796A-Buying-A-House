#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	int a[100];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	// there are two conditions per loop:
	// first condition: check if a[i] is less than or equal to 'k' but not equal to zero and 'prev' is -1
	// if true then, save the absolute distance between 'm' and 'i'
	// second condition: check if a[i] is less than or equal to 'k' but not zero and
	// the absolute distance between 'm' and 'i' is less than the 'prev'
	// if true then, save the distance in 'prev'
	// lastly, multiply 10 to the 'prev' variable to get the total distance (meters)
	int prev = -1;
	for (int i = 1; i <= n; i++) {
		if (a[i] <= k && a[i] != 0 && prev == -1) {
			prev = abs(m - i);
		} else if (a[i] <= k && a[i] != 0 && abs(m - i) < prev) {
			prev = abs(m - i);
		}
	}
	cout << prev * 10 << '\n';
	return 0;
}
