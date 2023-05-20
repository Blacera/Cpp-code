#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    long long int maxnumber = max(max(a,b),c); // tìm số lớn nhất trong 3 số 
    long long int minnumber = min(min(a,b),c) ; // tìm số nhỏ nhất trong 3 số 
    long long int middle = ((a+b+c) - maxnumber - minnumber); // tìm số nằm giữa max và min
    cout << maxnumber << " " << middle << " "<< minnumber ; // in chúng ta 
    return 0;
}