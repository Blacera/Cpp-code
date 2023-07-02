#include <iostream>
using namespace std;
int main()
{
    int n, x, i;
    cin >> n >> x;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    for (i = 0; i < n; i++)
    {
        if (x == a[i])
            dem++;
    }
    cout << dem;
    return 0;
}