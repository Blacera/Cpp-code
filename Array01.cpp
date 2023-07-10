#include <iostream>
using namespace std;
int main()
{
    long int n, i;
    cin >> n;
    long int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long int max = 0;
    long int Index = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            Index = i+1;
        }
    }
    cout << max << "\n";
    cout << Index;
}