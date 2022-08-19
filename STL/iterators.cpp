// iterators are just like pointers like pointers point address the iterators point the elements of containers(in STL)

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v = {2, 3, 5, 6, 7};
	//how to make iterator
	vector<int> :: iterator it = v.begin();

	cout << *it << endl ; //prints 2
	cout << *(it + 2) << endl; //prints 5 as they are continous but don't write *it + 2 use brackets


//priting vector using iterator:
	for (it; it != v.end(); ++it)
	{
		cout << (*it) << " ";
	}

	cout << endl;
//-------------difference between it++ and it+1
	/*it++ moves to next iterator
	it+1 moves to next position

	in vector it doesn't make any difference as vector are stored contiguous
	but in maps sets where they are stored randomly in memory therefore there only it++ works , it + 1  wont work as element  wont be next location(mostly)
	*/

//-------------------for Pairs:

	vector<pair<int , int>> v_p = {{1, 2} , {2, 3} , {3, 4}};

	vector<pair<int, int>> :: iterator it1;
	for ( it1 = v_p.begin(); it1 != v_p.end() ; ++it1)
	{
		cout << (*it1).first << " " << (*it1).second << endl;
	}

//we can use (it1->first) <=> (*it).first


	return 0;
}

