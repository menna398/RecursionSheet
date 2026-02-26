using namespace std;
#include <iostream>

void DigitsOfTheNumber (int n)
{
	if (n == 0)
	{
		return;
	}
	int digit = n % 10;
	DigitsOfTheNumber(n / 10);
	cout << digit << " ";
}

int main()
{
    int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n == 0) {   
			cout << 0;
		}
		else {
			DigitsOfTheNumber(n);
		}
		cout << endl;
	}



}

