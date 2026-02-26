using namespace std;
#include <iostream>

void BaseConversion (int n) //10 5 2 1
{
    if (n == 0)
    {
        return;
    }
	BaseConversion(n / 2); //b(5) b(2) b(1) b(0)
	cout << n%2;           //  1    0      1    0
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 0)
            cout << 0;
        else
            BaseConversion(n);
		cout << endl;
    }
}


