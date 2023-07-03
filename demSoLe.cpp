#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string S; 
    getline(cin, S);
    int dem = 0;
    for (int i = 0; i < S.length(); i++)
    { 
        // nếu các kí tự thuộc khoảng từ 0 đến 9 và chia hết cho 2 dư 1 thì tăng biến đếm lên 1
        if (S[i] >= '0' && S[i] <= '9' && (S[i] - '0') % 2 == 1) 
            dem++;
    }
    cout << dem << endl;
    return 0;

}