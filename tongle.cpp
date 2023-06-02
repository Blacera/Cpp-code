#include <iostream>
using namespace std;
int main()
{
    long long int n, i;
    long long int sum = 0;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
            sum += i;
    }
    cout << sum;
    return 0;
}