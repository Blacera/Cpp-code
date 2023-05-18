#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    long long int i;
    long long int sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if ( a[i] % 2 != 0 ) 
            sum = sum + a[i];
        //cout << sum;
    }
    cout <<  sum;
    return 0;
}