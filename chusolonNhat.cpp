#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    long int num = 0;
    while (n > 0)
    {
        num = max(num, n % 10);
        n /= 10;
    }
    cout << num << endl;
    return 0;
}