#include<bits/stdc++.h>
using namespace std;

int main() {
	/*------------------SETS----------------------*/

	/*------------------------ORDERED SET-------------------*/

//NOTE: all operations of set take logN time
//Q. given n elements tell me the numbr of unique elements

	// arr[] = {2, 5, 2, 1, 5};

	set<int> st;
	int n;
	cin >> n;
	for (int i = 0; i < n ; i++) {
		int x;
		cin >> x;
		st.insert(x);     // {1,2,5} //it takes logn time for insertion where n is size of set here 3
	}


	//-----how to print set then??-----
	for (auto it = st.begin() ; it != st.end(); it++) {
		cout << *it << " ";                        // gives 1 2 5
	}
	cout << endl;

	//other best way to print

	for (auto it : st) {
		cout << it << endl;
	}

	cout << *st.begin() << " "; // returns 1 that is the first element in set

	cout << *st.begin() + 2 << endl; //gives 2 why?? cuz *st.begin had 1st element of set i.e 1 and we did + 2 in it thats why and it wont return 5 for that below next function


	//-----for particular index we can use below The next function returns set iterator to that position

	int first = *next(st.begin(), 0);  // returns 1
	int third = *next(st.begin(), 2);  // returns 5
	cout << first << " " << third << endl;


// -----Erase------

// st -> {1,2,5}

	// st.erase(st.begin());  //st.erase(iterator you want to delete) deletes 1 st->{2,5}

	// st.erase(st.begin(), st.begin() + 2 );    // [) will delete 1 and 2 ..st->5

	cout << *st.end(); // returns 3 as end point to address right after last element

	cout << *next(st.begin(), 2); // abhi return 5

	st.erase(5);  // st.erase(key) //will delete the 5 i.e particular element

	cout << *next(st.begin(), 2);  // return st.end as 5 is deleted and 5 is not exist
	// st.end here will be 2

//-----other ways of declaring set same as vector----
	set<int> stt = {1, 5, 7, 8};

	set<int> st1(stt.begin(), stt.end()); //copy elements of st same as vector

	for (auto it = st1.begin() ; it != st1.end(); it++) {
		cout << *it << " ";                        // gives 1 5 7 8
	}

// --------find----------

	cout << *st1.end(); //returns 4

	auto it = st1.find(7); // logn if 7 exist it return the iterator to 7
	cout << *it;  // returns 7

	auto itt = st1.find(9);// if doesnt exit then return it = st.end()
	cout << *itt; //i.e returns 4

	cout << *st1.find(7);

	st.emplace(6);  //same as st.insert(6)
	cout << st1.size(); // returns size of the set st1 that is 4


//---------set of ANYTHING can be defined--------------
// set makes sure that that "anything" will be unique

	set<vector<int>> s1; //will be a set of vector and store unique elements values

	/*set<int> st //we made set of int then it will store uniques int values
	st.insert(5) // st->{5}
	st.insert(5) // still st->{5}*/

// how to delete entire set?
	st.erase(st.begin(), st.end());

	for (auto it : st) {
		cout << it << endl;   // will print nothing as we deleted above
	}


	/*----------------------UNORDERED SET----------------------*/

	unordered_set<int> st3;
	st3.insert(2);
	st3.insert(3);
	st3.insert(1);

	/*it can store in any random order but the better thing is that the average time is constant in nature but worst case is linear i.e O(set size)

	average TC is O(1)
	if you dont require to store elements in ascending order make sure you use unordered set as it has average almost for all O(1) but it might happen that you get TLE(i.e worst case for unordered)then switch to ordered set but Give PRIORITY TO UNORDERED SET
	*/

// worst case here depends on the hashes the computer generate not like linear search ki we say when it has element in last,worst cases of unordered case depends on the interanl implementation of hashes and all(worst case of unordered occur very rarely so use this )

//REST ALL OPERATIN/FUNCTION SAME AS ORDERED SET



	/*-------------------MULTISET------------------*/

// if you have to store all the elements (not just unique ) in the SORTED FASHION

	multiset<int> ms;

	ms.insert(1);
	ms.insert(1);
	ms.emplace(2);
	ms.insert(2);
	ms.insert(3);

	cout << '\n';
	for (auto it : ms) {
		cout << it << " ";  //will give {1,1,2,2,3}
	}

	auto t = ms.find (2); // returns iterator pointing to the first occurence of 2
	cout << *t;

	ms.erase(2); //all the instances of 2 will be erased

	ms.clear(); // delete entire set
	ms.erase(ms.begin(), ms.end()); //deletes entire set

	ms.erase(ms.find(2)); //will erase only one instance
	ms.erase(ms.find(2), ms.find(2) + 2); //will erase 2 instance

//COUNT
	cout << ms.count(2); //give you how many time 2  occurs i.e 2 times here
	//rest all other funtion same as what we read before


}