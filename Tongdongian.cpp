#include <iostream>
using namespace std;
int main()
{
    long long int n, i;
    int sum = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
        //cout << sum << endl;
    }
    cout << sum;
    return 0;
}