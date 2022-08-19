#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

//------------------Range bases loop: we can directly move over values without iterators pointinng to their loaction----------------

	vector<int> v = {2, 3, 5, 6, 7};

	for (auto value : v) {    //prints: 2 3 5 6 7
		cout << value << " ";
	}
	cout << endl;
	cout << v[0];  // this prints: 2
// here the value is not the actual value its the copy created of element
	//to get the actual values: use refrence , here the value of element will be changed the vector too:

	for (auto &value : v) {   // prints: 3 4 6 7 8
		value++;
		cout << value << " ";
	}
	cout << v[0]; // this print new value 3

//suppose you have to add 5 to every element of vector:
	for (auto it : v) {
		it += 5;
		cout << it << " ";  // 8 9 11 12 13
	}
	cout << endl;
	vector<pair<int , int>> v_p = {{1, 2} , {2, 3} , {3, 4}};


	for (pair<int, int>&value : v_p) {
		cout << value.first << " " << value.second << endl;
	}



//---------------------:AUTO KEYWORD:----------------
// auto dynamically automatically finds the datatype:

	auto a = 1.0;
	cout << 1;

//above can be shortened auto will replace pair<int , int > datatype:

	for (auto &value : v_p) {
		cout << value.first << " " << value.second << endl;
	}
	cout << endl;



}