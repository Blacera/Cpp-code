#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        sort(a, a + N, greater<int>()); // ham sap xep giam dan
        cout << a[K - 1]; // truy xuat phan tu thu K-1
        return 0;
    }
}