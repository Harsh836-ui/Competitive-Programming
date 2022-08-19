#include<bits/stdc++.h>
using namespace std;

int main() {
	/*---------------------STACK------------------*/
	stack<int> st; //lifo ds
//main things //pop //top //size // empty //push or emplace

	st.push(2);
	st.push(4);
	st.push(3);
	st.push(1);

	while (!st.empty()) {       //prints the stack
		cout << st.top() << endl;
		st.pop();
	}

	cout << st.size() << endl; //print 4
	cout << st.top() << " "; //prints 1 i.e last element inserted i.e 1
	st.pop(); //deletes the last entered element

	cout << st.top(); // now will print 3

	bool flag = st.empty(); //returns true if stack is empty,or false
	cout << flag; // returns 0 as false out stack is not empty

// to delete entire stack
	while (!st.empty()) {
		st.pop();
	}

	cout << st.size() << endl; //give 0 as we deleted

	bool now = st.empty();
	cout << now << endl; // this give 1 as its true since out stack is empty

//-------------- if in empty stack-----------------
//IMP:

	stack<int> stt;
	if (!stt.empty()) {         // always have  a check before impplementing stack.top() if its empty or not ,otherwise it will throw error in cp
		cout << stt.top() << endl;
	}


	/*-----------------------QUEUE------------------*/

//FIFO ds //push() //front() //pop() // size() //empty() all are O(1) exception deletion

	queue<int>q;
	q.push(1);
	q.push(5);
	q.push(3);
	q.push(6);

	//How to print
	while (!st.empty()) {       //prints the stack
		cout << st.top() << endl;
		st.pop();
	}

	cout << q.front() << " " ; //prints 1

	q.pop();
	cout << q.front() << endl; //prints 5

// Delete whole queue //Linear Time O(n)
	while (!q.empty()) {
		q.pop();
	}


	queue<int> q1;
	for (int i = 0; i < 10; i++) {
		q1.push(i);
	}



}