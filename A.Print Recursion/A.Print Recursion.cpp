using namespace std;
#include <iostream>

void printt(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << "I love Recursion" << endl;
    printt(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printt(n);
}

