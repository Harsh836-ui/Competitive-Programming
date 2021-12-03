#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 100;
typedef long long int lli;
lli arr[N];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli n, q;

	cin >> n >> q;

	while (q--) {
		lli a, b, k;
		cin >> a >> b >> k;

		arr[a] = arr[a] + k;
		arr[b + 1] = arr[b + 1] - k;

	}
//prefix sum while ke bhr:
	for (lli i = 1 ; i <= n ; i++) {
		arr[i] = arr[i - 1] + arr[i];
	}
	lli maxx  = -1;
	for (lli i = 1; i <= n; ++i)
	{
		maxx = max(maxx , arr[i]);
	}

	cout << maxx << endl;
	return 0;
}
