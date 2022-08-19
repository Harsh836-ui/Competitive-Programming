#include<bits/stdc++.h>
using namespace std;

int main() {

	/*----------------------------Priority Queue----------*/

// set can only set unique elements
//unordered set had O(N) in worst case rarely

	//therefore we have priority queue that store all in sorted order and does the operations in Log(N)

//push //size // top //pop //empty

//declare
	priority_queue<int> pq;

	pq.push(1);
	pq.push(5);              //uses concept of heapify
	pq.push(2);
	pq.push(6);         // 6 5 2 1 //contains all the element in descending order i.e keeps max element right at the top after that 2nd max............

	cout << pq.top() << " "; //print 6
	pq.pop();

	cout << pq.top() << endl; //print 5

	priority_queue<pair<int, int>>pq1;

	pq1.push(make_pair(1, 5));   //pq  will store 1,7 at top then 1,6 then 1,5
	pq1.push(make_pair(1, 6));
	pq1.push(make_pair(1, 7));


	pair<int, int> top = pq1.top();  //we have to make a pair for pointing to top also
	cout << top.first << " " << top.second << endl;

//what if i want to store everything in ascending order that is min priority queue
// i.e making minimum priority queue using maximum
	priority_queue<int> pq2;

	pq2.push(-1);   // pq.push(-1 * element);
	pq2.push(-5);  //do negation
	pq2.push(-2);
	pq2.push(-6);

	cout << -1 * pq2.top() << endl; //prints 1


// or the original way to make min priority queue without negation

	/*--------------------------Min priority queue--------------------*/
//for int
	priority_queue<int, vector<int>, greater<int>>pq3;  //Main syntax
	// datatype , vector, greater
	pq3.push(1);
	pq3.push(5);
	pq3.push(2);
	pq3.push(6);

	cout << pq3.top() << endl; //prints 1


//for pair
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq4;	 //replace the int in syntax to whatever you want to create


	/*--------------------------DEQUE---------------------*/

	deque<int> dq;
	// push_front()  //push_back //push_front //pop_back //pop_front  //begin , end , rbegin ,rend
	//size
	//clear
	//empty
	//at



//its same as vector only difference is that it provides use both push_back and front while vector just provides us push_back
	//its better than vector as push operations on both directions

	/*---------------------------LIST--------------------*/

// list implements doubly linked list
//list is same as deque except it also provide  remove() that takes O(1) superfast
// that's why list is prefered over deque //if you need a data structure  which can work from all directions front back top......use list

	// push_front()  //push_back //push_front //pop_back //pop_front  //begin , end , rbegin ,rend
	//size
	//clear
	//empty
	//at
	//remove () -> O(1)
// begin returns the iterator and *begin returns element
	list<int> ls;
	ls.push_front(1);
	ls.push_front(2);
	ls.push_front(3);

	ls.remove(2); // O(1) operation

}