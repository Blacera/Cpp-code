#include <iostream>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    long int dem = 0;
    long int sum = 0;
    while (n > 0)
    {
        dem++;
        sum += n % 10; // thêm số cuối cùng vào tổng
        n /= 10;       // xóa số cuối cùng khỏi n bằng cách chia cho 10
    }
    cout << dem << endl;
    cout << sum << endl;
    return 0;
}