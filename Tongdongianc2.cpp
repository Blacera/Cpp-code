#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int sum;
    if (n % 2 == 0)
    {
        sum = -(n / 2);
    }
    else
    {
        sum = (n + 1) / 2;
    }
    cout << sum << endl;
    return 0;
}