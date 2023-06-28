#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int mang[N];
    for (int i = 0; i < N; i++)
    {
        cin >> mang[i];
    }
    int sum = 0;
    int count = 0; // dem so phan tu am
    for (int i = 0; i < N; i++)
    {
        if (mang[i] < 0)
        {
            count++;
            sum += mang[i];
        }
    }
    if (count == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        double kqua = (double)sum / count;
        cout << fixed << setprecision(2) << kqua << endl;
        /* double đâu dùng để khai báo cho biến kqua 
        double sau dùng để ép kiểu từ int sang double */
    }
    return 0;
}