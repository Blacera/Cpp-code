#include <iostream>
using namespace std;
int main()
{
    int s1, t1, s2, t2;
    cin >> s1 >> t1 >> s2 >> t2;
    float v1 = (double)s1 / t1;
    float v2 = (double)s2 / t2;
    if (v1 > v2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
