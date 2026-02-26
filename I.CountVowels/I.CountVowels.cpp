using namespace std;
#include <iostream>
#include <string>

int vowel(string s, int n) {

	if (n < 0) {
		return 0;
	}

	if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u' ||
		s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' || s[n] == 'U') {
		return 1 + vowel(s,n-1);
	}
	else
		return vowel(s, n - 1);

}

int main()
{
	string s;
	getline(cin, s);
	cout<<vowel(s, s.length()-1);
}
