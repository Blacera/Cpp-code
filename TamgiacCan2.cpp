#include <iostream>
using namespace std;
int main()
{
    long int a, b, c;
    cin >> a >> b >> c;
    if (((a > 0) && (b > 0) && (c > 0)) && ((a + b > c) && (b + c > a) && (c + a > b)) && !((a == b) || (b == c) || (c == a)))
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}