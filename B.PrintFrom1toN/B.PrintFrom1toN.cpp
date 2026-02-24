using namespace std;
#include <iostream>

void printt(int n)
{
    if (n == 0)
    {
        return;
    }
    printt(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    printt(n);

}

