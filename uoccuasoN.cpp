#include <iostream>
#include <cmath>
using namespace std;
int main () {
    long int n,i;
    cin >> n;
    long int dem = 0;
    for (i = 1; i <= sqrt(n); i++) { //chỉ xét đến căn n để tối ưu
        if (n % i == 0) {
            dem+=2;
            if (i*i == n) {
                dem--; // i*i = n thì chỉ đếm 1 lần vì nó là ước chính phương
            }
        }
    }
    cout << dem << endl;
    return 0; 
}