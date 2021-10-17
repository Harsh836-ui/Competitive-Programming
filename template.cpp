
//snippet: 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL); 
  
return 0;
}

//Binary Search:


#include<bits/stdc++.h>
using namespace std;

void binsearch(int arr[], int lb , int ub , int x) {
	int count = 0 ;
	int mid ;
	while (lb <= ub) {
		mid = (lb + ub) / 2;

		if (arr[mid] == x) {
			cout << "Element Found at Posi:->" << mid + 1 << " in sorted Array ";
			count++;
			break;
		}

		if (arr[mid] < x) {
			lb = mid + 1;
		}

		if (arr[mid] > x) {
			ub = mid - 1;
		}

	}
	if (count == 0) {
		cout << "Element Not Found";
	}
}

int main() {

	int n; cin >> n;
	int arr[n];

	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	int x; cin >> x;
	sort(arr, arr + n);
	binsearch(arr, 0 , n - 1 , x);
}

//Kadane Algo:

int best = 0, sum = 0;
for (int k = 0; k < n; k++) {
sum = max(array[k],sum+array[k]);
best = max(best,sum);
}
cout << best << "\n";

//Sum of array stl
int arraySum(int a[], int n)
{
	int initial_sum  = 0;
	return accumulate(a, a + n, initial_sum);
}
int sum = arraySum(arr, n);


