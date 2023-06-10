#include <iostream>
using namespace std;
int main () {
    long int i,j,n;
    cin >> n;
    for (i = 1;i <= n;i++) {
        for (j = i;j < n+i;j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}