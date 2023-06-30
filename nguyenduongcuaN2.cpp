#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (sqrt(i) ==(int) sqrt(i))
        {
            cout << i << "\n";
        }
    }
    return 0;
}