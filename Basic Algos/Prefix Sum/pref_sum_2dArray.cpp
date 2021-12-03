/*
given 2d array of N*N integers. Given Q queries and in each query given a,b,c and d print sum of square represented by (a,b) as top left point and c,d as bottom right point

constraints:
1<=N<=10^3
1<=a[i][j]<=10^9
1<=Q<=10^5
1<=a,b,c,d<=N
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e3 + 10;
int arr[N][N];
long long pf[N][N];
int main(){
	int n;cin>>n;

for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
		cin>>arr[i][j];
		pf[i][j]=arr[i][j]+ pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
	}
}

int q; cin>>q;
while(q--){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	long long sum=0;
// old sum is commented
// for(int i=a;i<=c;i++){
// 	for(int j=b;j<=d;j++){
// 		sum+=arr[i][j];
// 	}
// }

// cout<<sum<<endl;

	sum= pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b+1];

	cout<<sum<<endl;

//Old: O(N^2) + O(Q * N^2)= O(10^5 * 10^6) = 10^11 iterations - TLE

//NEW: O(N^2) + O(Q) + O(1) =O(N^2)= 10^6 ( cuz less than 10^7 therfore 1 s ke andr run)
}


}
