#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void printVec(vector<int> &v) {

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " " ;
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v;

//input:
	int n; cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		v.push_back(x); // O(1)
	}

	printVec(v);

//input custom size
	vector<int>v2(10);
	printVec(v2); // will print 10 0's
	vector<int>v3(10 , 3);
	printVec(v3); //will fill 3's

//pop_back

	v.pop_back();
	printVec(v); //remove last element in v

//Copying vectors:
	vector<int> vs = v; //copy ki TC = O(n)
	printVec(vs);
	vs.push_back(5);
	printVec(vs);
	printVec(v); //isme no change as copy bna tha

//note be carefule while copying vectors with and without reference

//Vector of string:
	vector<string> v_str;
	int s; cin >> s;

	for (int i = 0; i < s; ++i)
	{
		string ss; cin >> ss; v_str.push_back(ss);
	}

	for (auto it : v_str) {
		cout << it << " " << endl;
	}
}
