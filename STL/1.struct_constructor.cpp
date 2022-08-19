#include<bits/stdc++.h>
using namespace std;

struct node
{
	string str;
	int num;
	double doub;
	char x;

	node (str_ , num_ , doub_ , x_ ) {
		str = str_;
		num = num_;
		doub = doub_;
		x = x_;

	}
};
int main() {

	/*Wrong way of defining
	node harsh;
	harsh.str;
	harsh.num;
	harsh.doub;
	harsh.x;*/

//the better way is

	node * harsh = new node("striver", 79, 91.0, 'e'); // use of constructor

	cout << harsh->1;


}