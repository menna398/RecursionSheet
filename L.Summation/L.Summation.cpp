using namespace std;
#include <iostream>

long long summation(int arr[], int n) { // 1 2 3 4 , 3
    if (n < 0) {
        return 0;
    }
    return arr[n] + summation(arr, n - 1); // 4 + s(2) s(1) s(0) s(-1)
}


int main()
{
    int n;
    cin >> n;
	int arr[1000];
    for(int i=0; i < n; i++) {
        cin >> arr[i];
	}
	cout << summation(arr, n - 1);
}
