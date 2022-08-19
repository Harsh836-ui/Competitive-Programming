#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

// most of functions all same as we saw in maps...etc

//----------------sets---------------
// sets collection of some element that is maps me se value vala part hata do

//-----------------------Normal sets----------
	/*//stores in sorted order
		set<string>s;
		s.insert("abc"); //log(n)
		s.insert("BCD");
		s.insert("jkjlfs");

	//To access elements:
		//we cant do like cout << s[1]; we have to use
		auto it = s.find("abc");
		if (it != s.end()) { //to prevent segmentation fault
			cout << *(it) << endl;
			s.erase(it);
		}

		s.erase("jkjlfs");
	//Print:
		for (auto it : s) {
			cout << it << endl;
		}*/

//or for(auto it : s.begin() ; it!= s.end() ; it++) cout <<(*it)

//Same quuestion just print unique strings in sorted order not frequency than its better to use set than map:

	/*	set<string>s1;
		int n ; cin >> n;
		while (n--) {

			string ss; cin >> ss;
			s1.insert(ss);

		}

		for (auto it : s1) {
			cout << it << endl;
		}*/


//---------unordered set------------
	//same hum yha bhi complex data structure ni rkh skte like
	//set of set , pairs agr use krna h to cp me hash function khud se define kr skte
	/*here all time complexity become O(1)
	here order is random order not sorted
	Q.Given N strings and Q queries In each query you are given a string print yes if strng is present else no*/

	/*unordered_set<string>us;
	int n; cin >> n;
	while (n--) {
		string sss; cin >> sss;
		us.insert(sss); //O(1)

	}
	int q; cin >> q;
	while (q--) {
		string str ; cin >> str;
		if (us.find(str) != us.end()) //O(1)
			cout << "YES \n";

		else cout << "NO \n";
	}*/


//----------Multiset----------log(n)
	// keys are not unique that is dupicates are allowed but print in sorted order
//there is something known as priority queue but you can use multiset in place of priority queue
	multiset<string>ms;
	ms.insert("abc"); //log(n)
	ms.insert("jkjlfs");
	ms.insert("BCD");
	ms.insert("abc");


	for ( auto it : ms) {
		cout << it << endl;
	}

// interesting exception things in multiset

//find() returns iterator or 1st value out of multiple
	auto it1 = ms.find("abc");
	if (it1 != ms.end()) {

		ms.erase(it1); //deletes only 1 instance that was 1st one
	}


	// for ( auto it : ms) {
	// 	cout << it << endl;
	// }

	ms.erase("jkjlfs"); //this will delete all the present instances of given
	for ( auto it : ms) {
		cout << it << endl;
	}
}