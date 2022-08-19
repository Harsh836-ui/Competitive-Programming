#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	pair<int , string> p ;//pair of int and string

//initialising or inserting values in string:
	p = make_pair(2, "abc");

//or: p = {2,"abc"};

//Accesing:
	cout << p.first << " " << p.second << "\n";

	pair<int , string> &p1 = p;
	cout << p1.first << " " << p1.second << "\n";

	p1.first = 3;

	cout << p1.first << " " << p1.second << "\n";

//Taking user input of pairs:

	pair<int , int > arr[3];
	for (int i = 0; i < 3; ++i)
	{
		cin >> arr[i].first >> arr[i].second;
	}

	for (auto it : arr) {
		cout << it.first << " " << it.second << endl;
	}

//application: to mentain relation between two things eg. let element of both array be related with each other i.e if you swap 1 and 3 index in a[] then same should happen to b array too..therfore make pair
	int a[] = {1, 2, 3};
	int b[] = {2, 3, 4};

	pair<int , int > p_array[3]; //array of pairs
	p_array[0] = {1, 2};
	p_array[1] = {2, 3};
	p_array[2] = {3, 4};

	swap(p_array[0] , p_array[2]); //happens to both array
	for (int i = 0; i < 3; ++i)
	{
		cout << p_array[i].first << " " << p_array[i].second << endl;
	}



}