#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.14
int main()
{
    float R;
    cin >> R;
    cout << fixed << setprecision(1) << 2 * PI * R << endl; // làm tròn phần thập phân đến 1 chữ số
    cout << fixed << setprecision(1) << PI * R * R;
    return 0;
}