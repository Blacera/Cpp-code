#include <iostream>
using namespace std;
int main()
{
     long int n, i;
    cin >> n;
    long int a[n];
    long int first = -1, last = -1; // khởi tạo giá trị đầu cuối là -1
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0) // điều kiện của phần tử
        {
            if (first == -1)

                first = i+1;
            last = i+1;
        }
    }
    cout << first << " " << last << endl; // xuất chỉ số đâu và cuối
    return 0;
}