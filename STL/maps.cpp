#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void print(map<int, string>&m) {
	for (auto &it : m) {
		cout << it.first << " " << it.second << endl ;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

//Maps:
	/*map stores key --> values as pairs i.e creates a mapping(from key to value)

	letKEY(int) String
	      1      abc
	      5      cde
	      3      acd

	they are stored in sorted order according to key while unorder follow random order
	*/

//Declare: map<key , value> //key and value can be anything even containers too:
	map<int, string> m ;
	m[1] = "abc"; //O(log(n))
	//even if you write m[6] it will take o(logn time) as by default value is inserted so be careful for int by default 0 will go , for string empty string will go , for vector empty vector will be inserted

	m[5] = "cde";
	m[3] = "acd";

//or
	m.insert({1, "hello"});
	m.insert(make_pair(4, "gfg")); //value is inserted as pair , can also use make_pair
	m[5] = "har" ; //it will replace the existing value with key
	print(m);

// also every key is unique you cant insert a same key twice
//map of string and int i.e string is the key so values will be sorted according to the string here:

	map<string, int > ms;
	string s ;
	s = "a";
	ms[s] = 10;
	ms.insert(make_pair("c", 34));
	ms.insert({"b" , 89});
	ms.insert({"harsh", 85});

	//they will be sorted lexicographically

	for (auto &it : ms) {
		cout << it.first << " " << it.second << endl ;
	}


//-------------------find() in map:
	auto it = m.find(8); //returns iterator of 3 but if not present then returns m.end

	if (it == m.end()) {
		cout << "No value" << endl;
	}

	else {
		cout << (*it).first << " " << (*it).second << endl;
	}


//prints no value as 8 doesnt exist in map m


//--------------erase()

	m.erase(3);  // deletes key 3 vala pair from map
	print(m);

//or by using iterator:
	auto it1 = m.find(5);
	m.erase(it1);
	print(m);


	auto it2 = m.find(16); //deleting key that doesn't exist: supposed to throw segmentation fault
	//therefore always use a check:
	if (it2 != m.end())
		m.erase(it2);
	print(m);

//-------------------clear()
	m.clear();
	print(m); //clears the whole container


//time complexity critical case(In normal Maps):
	// the time complexity of insertion in map(genearlly logn) is not always same,,,,,, it depends on key also eg.
	map<string, string>ms1;
	ms1["abcd"] =  "vas"; //here in insertion along with logn time it also need time for comparision of strings therefore total time complexity:
// O(s.size()  * log(n))

//question: given n strings print unique string in lexicographical order with their frequency:

	map<string , int > mss;
	int n; cin >> n;
	while (n--) {
		string ss; cin >> ss;
		mss[ss]++; //or mss[s] = m[s]+1
	}

	for (auto &val : mss) {
		cout << val.first << " " << val.second << endl;
	}

}