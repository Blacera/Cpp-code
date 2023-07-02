#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    getline(cin, str); // nhập xâu kí tự
    int dem = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ') // kiểm tra xem có khoảng trắng không
        {
            dem++ ; // tăng biến đếm lên 1 giá trị 
        }
    }
    cout << dem;
    return 0;
}