#include <iostream>
using namespace std;
int main () {
    long long int n,i,j; 
    cin >> n;
    for (i = 1;i <= n;i ++) {
        for (j = 1;j <= n;j++) {
            cout << j << " ";
        }
        cout << "\n" ;
    }
    return 0;
}