#include<bits/stdc++.h>
using namespace std;

int main() {

	/*//1. Given N elements , print elements that occurs max number of times
	//input
	//5
	//1 3 3 3 2
	// output 3


	//Ans 1:
		int n;
		cin >> n;
		unordered_map<int, int >mpp;
		int maxi = 0; int x;
		for (int i = 0 ; i < n ; i++) {

			cin >> x;
			mpp[x]++;
			if (mpp[x] > mpp[maxi]) {
				maxi = x;

			}
		}

		cout << maxi << endl;
	//tc: O(n) * O(1) = O(N) // for unordered map O(1) //note if you get a TLE switch to ordered map*/


//2. Given N elements , print all elements in sorted order
// N = 6
// 6 6 3 2 3 5
//Output : 2 3 3 5 6 6
//ANS2:

	//note in this way you can also sort at is it better then doing sort(a,a+n)
	// sort() takes nlogn alone provided the loop of input it will become N + Nlogn
	int n;
	cin >> n;

	multiset<int> ms;
	for (int i = 0 ; i < n; i++) {
		int x;
		cin >> x;
		ms.emplace(x);
	}

	for (auto it : ms) {
		cout << it << " ";
	}

tc: N * logn //as multiset takes logn


//3. Print The digits of number , EX: 12863 - 1 2 8 6 3
// here i will use stack as it has lifo

	int num; int count = 0 ; int rem;
	cin >> num;
	stack<int> st;

	while (num > 0) {
		rem = num % 10;
		num = num / 10;

		st.push(rem);
	}

	while (!st.empty()) {
		cout << st.top() << endl;
		st.pop();
	}
}