#include <iostream>
#include <cmath>
using namespace std;
int main () {
    long long int i,N;
    long long int count;
    cin >> N;

    for (i = 1;i <= N;i++) {
        if (i % 3 == 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}