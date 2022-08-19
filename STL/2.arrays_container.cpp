#include<bits/stdc++.h>
using namespace std;
// array<int , 100> arr; //another way of declaring int arr[100] but it should be declared globally

int main() {
	//ARRAYS:

	/*// array<int , 5> arr = {1, 5, 6}; // {1,5,6,0,0}
	// array<int , 5> arr = {0}; // {0,0,0,0,0}

	array<int, 5> arr;
	arr.fill(0) ; //fill all the array with 0
	arr.fill(5); //{5,5,5,5,5}


	// arr.at(index); //to access at particular index

	for (int i = 0; i < 5; i++) {
		cout << arr.at(i) << " "; // entire array gets printed
	}*/




//ITERATORS

	/*begin() , end() , rbegin() , rend ()   //work for all ds

	begin()-> points to 1st element
	rbegin()-> points to last element
	end() -> points to address right after last element
	rend() -> points to adress right before the start
	auto autmatically know the datatype and adjust
	*/

	/* array<int , 5>arr = {1, 2, 4, 5, 6};   //i.e arr[5] = {1,2,4,5,6}

	//another way to print an array
	for (auto it = arr.begin() ; it != arr.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// this below will print in reverse order
	for (auto it = arr.rbegin() ; it != arr.rend(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	// this will print in reverse too
	for (auto it = arr.end() - 1 ; it >= arr.begin()  ; --it) {
		cout << *it << " ";
	}

	cout << endl;

	//aka 'for each' loop another way to print
	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;

	string s = "harsh";
	for (auto c : s) {     //khud se ek ek char pe forward jaega
		cout << c << " ";
	}


	// size
	cout<<arr.size();

	//front
	cout<<arr.front(); //or arr.at(0)  // 1st element

	//back
	cout<<arr.back();  //or arr.at(arr.size()-1)   //last element */



}