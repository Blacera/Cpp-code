#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int n,i;
    long long int Haphuong = 0;
    cin >> n;
    if (n < 2) {
        cout << "NO";
        return 0;
    }
    for ( i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            Haphuong++;
    }
    if (Haphuong == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}