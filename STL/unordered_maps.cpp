#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

//unordered Maps how are they are different from normal maps:

	//as name suggest they are not in order:

	/*
	All the operations we saw in maps are all same here the differences are:
	1.Inbuilt Implementation(Map uses tree , unorderd maps uses hashtable)
	2.Time complexity all the operations (unorderdMap = O(1) , map = O(logn))
	3.The order of key doesnt matter here
	4.valid keys datatype (we cant use unorderd map for ds like pairs, set , vectors , setofset as a key but can use in maps)
	*/

	// unordered_map<vector<int>, int > mv; // we cant use vector as a key in unordered map as we saw above

	unordered_map<int , pair<int, int>> um; // can use as non key though

	map<vector<int>, int > mv; // in maps we can

//Question:

	/*given N strings and q queries in each query you are given s string pring frequency og that string*/

	//since here order doesnt matter we will use unordered_maps

	unordered_map<string , int>m1;
	int n ; cin >> n;
	while (n--) {
		string s; cin >> s;
		m1[s]++;
	}

	int q; cin >> q; while (q--) {
		string ss; cin >> ss;
		cout << m1[ss] << endl;
	}


//-----------------Multimaps----------------

// not used that much in cp

// same as map but here keys are not unique we can use two multiple values in same keys
//but for this purpose people generally use map <int , vector<string>>
	return 0;
}