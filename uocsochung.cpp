#include <iostream>
using namespace std;
int main()
{
    int m, n, i;
    cin >> n >> m;
    if (n > m)
    {
        for (i = 1; i < m-1; i++) // không chạy từ 0 vì khi làm mẫu số sẽ bị lỗi 
        {
            if (n % i == 0 && m % i == 0) // kiểm tra điều kiện m,n 
            {
                cout << i << " ";
            }
        }
    }
    if (n < m)
    {
        for (i = 1; i < n-1; i++)
        {
            if (n % i == 0 && m % i == 0)
            {
                cout << i << " ";
            }
        }
    }
    /* else
        cout << i << " "; */
    return 0;
}