#include<bits/stdc++.h>
using namespace std;

int main() {

	/*-----------------MAPS-------------------*/
//Maps same property as ordered set store everything in sorted order and unique
	// logn is TC of map
	map<string, int> mpp;
	mpp["raj"] = 27;
	mpp["hima"] = 31;
	mpp["sheela"] = 31;
	mpp["sandeep"] = 89;  //here map will store in alphabetic order int can be same but the key here string has to be unique

	mpp["raj"] = 29;   //since it store unique therefore it will overwrite
	mpp.emplace("harsh", 45);  //same as mpp["harsh"]=41;



	// mpp.erase("raj"); //mpp.erase(key) //delete that particular
	// mpp.erase(mpp.begin()); //delete the 1st element i.e harsh 31

	// mpp.clear(); //delete entire map

	// mpp.erase(mpp.begin(), mpp.begin() + 2); //delete 1st couple of elements
	// auto it = mpp.find("raj"); // this point to where raj lies if exist

	// auto it = mpp.find("simran"); //this point to the end since simran doesn't exist in this map

	/*if (mpp.empty()) {
		cout << "Yes It is empty"; // to check if map is empty or not ...bool
	}
	*/
	// mpp.count("raj"); //always returns 1 as map stored only 1 instance of raj

// ----------Print a Map---------------

	//since our map here is storing pair of string and int
	for (auto it : mpp) {
		cout << it.first << " " << it.second << endl;  //auto will automatically adjust itself to pair and . is used as pair
	}

	/*----------------------PAIR-------------------
	pair<int,int> pr;
	pr.first = 1;
	pr.second= 10;*/

	// other way to print map - using iterators

	/*

	for (auto it = mpp.begin() ; it != mpp.end(); it++) {
		cout << it->first << " " << it->second << endl;      //since its an iterator therefore use ->
	}

	since map stored nothing but pair of string and int

	*/



	/*----------------------UNORDERED MAP-----------------------	*/
	// it stores in random order i.e unsorted but keeps unique keys
	unordered_map<int, int> mp;
	// note unordered map of pairs is not possible as mentioned in line 115
	// O(1) in almost all cases
	// O(n) in the worst case, where n is the container size
	// rest all functions and operation are used as before
	// same give periority to unordered map

	/*--------------------------PAIR CLASS--------------------------*/

	pair<int , int > pr1 = {1, 2}; //means pr.first = 1 and pr.second= 2

//nested pairs

	pair<pair<int, int>, int> pr = {{1, 2} , 5};
	cout << pr.first.first << endl; // print 1
	cout << pr.first.second << endl; //gives 2
	cout << pr.second << endl; // gives 5

	pair<pair<int , int >, pair<int , int >>prr = {{6, 7}, {10, 34}};

	cout << prr.first.first << endl; //gives 6
	cout << prr.first.second << endl; // gives 7
	cout << prr.second. first << endl;// gives 10


	pair<string , int > sr = {"Hello", 1};
	cout << sr.first << endl; // return hello
	cout << sr.second << endl; // return 1


	pair<pair<string , int >, pair<string, int>> srr = {{"Hello", 1} , {"world", 20}};
	cout << srr.first.first << " "; // print hello
	cout << srr.first.second << endl; // print 1

	cout << srr.second.first << " ";
	cout << srr.second.second << " ";

// can also intialise as
	pair <int, char> PAIR1 ;
	PAIR1.first = 100;
	PAIR1.second = 'G' ;

	cout << PAIR1.second;  // print g
	// you can create how many pairs you want

// You can also create:

	vector<pair<int , int>> vec; // vector of pair
	set<pair<int , int >> st;  // set of pair
	map<pair<int, int>, int > mmp; // map of pairs

	unordered_map<pair<int, int>, int > map; // NOT POSSIBlE as unordered map only stores single keys and unordered map does not contain a hash function for a pair like it has for int , string , etc;


	/*-----------------------------MULTIMAP-----------------*/
// sorted and multiple keys(not unique)
	multimap<string, int > mpp;
	mpp.emplace("raj", 2);
	mpp.emplace("raj", 3); // it will store both



}






