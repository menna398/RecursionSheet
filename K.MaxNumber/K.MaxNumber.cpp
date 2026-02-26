using namespace std;
#include <iostream>

int m = 0;

int maxi(int arr[], int n) { // 1 -3 5 4 -6 , 4

	if (n == 0) {
		return arr[0];
	}

	int mx = maxi(arr, n - 1); 

	if (arr[n] > mx)
		return arr[n];
	else
		return mx;
}

int main()
{
    int n;
	cin >> n; //5

	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i]; // 1 -3 5 4 -6
	}

	cout<<maxi(arr, n-1);

}

