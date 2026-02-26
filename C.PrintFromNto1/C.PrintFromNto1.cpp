using namespace std;
#include <iostream>

void printt(int n)
{
    if (n == 0)
    {
        return;
    }
    if (n == 1) {
        cout << n;
        return;
    }
    cout << n << " ";
    printt(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printt(n);

}

