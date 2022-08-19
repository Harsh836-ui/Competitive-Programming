#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

/*void printVec(vector<pair<int , int >> &v) {

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i].first << " " << v[i].second << endl;
	}
	cout << endl;
}*/



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	/*
	//vector of pairs:
		// vector<pair<int , int>> v = {{1, 2} , {2, 3} , {3, 4}}; // i.e vector ka hr ek element ek pair hoga

	//or by input:

		vector<pair<int , int>> v;
		int n ; cin >> n;
		for (int i = 0; i < n; ++i)
		{
			int x, y;
			cin >> x >> y;
			v.push_back({x, y});
			//or v.push_back(make_pair(x, y));


		}
		printVec(v);

	*/

//difference between array of vectors and vector of vector:

//1. Array of vectors:
	/*task :	3
	3 -->N vectors
	1 2 3
	3
	3 4 5
	2
	1 2
	* take this as input and create vector ka array/

	}*/

	/*int N; cin >> N;
	vector<int> ve[N]; //declaring array of vectors
	for (int i = 0; i < N; ++i)
	{
		int n ; cin >> n;
		for (int j = 0; j < n; ++j)
		{
			int x; cin >> x;
			ve[i].push_back(x);
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (auto it : ve[i]) {
			cout << it << " " ;
		}

		cout << endl;
	}*/

	//cout <<v[0][0]; // 0th vector me 0th element or 0th row me 0th colomn

//this can be treated as 2d vectors but here number of rows are fixed and coloumn dynamic

//2.Vectors of Vectors:
//By this we can make number number rows dynamic too

	int N;
	cin >> N;
	vector<vector<int>>v;

	for (int i = 0; i < N; ++i)
	{
		int n ; cin >> n;
		vector<int> temp;
		for (int j = 0; j < n; ++j)
		{
			int x ;
			cin >> x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}

	v[0].push_back(10); // v vector ke 1st vector me 10 insert

	v.push_back(vector<int>()); //inserring an empty vector in vector v or inserting a new row

	//you can also use this in place of temp vector you created above

	for (int i = 0; i < N; ++i)
	{
		for (auto it : v[i]) {
			cout << it << " " ;
		}

		cout << endl;
	}



}