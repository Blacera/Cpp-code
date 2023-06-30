#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[1000];
    cin.getline (str, 1000); // hàm nhập chuỗi
    for (int i = 0; i < strlen(str); i++) // strlen là hàm đếm độ dài chuỗi
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // kiểm tra kí tự có nằm trong khoảng A-z
        {
            str[i] = str[i] + 32; // chuyển kí tự thường thành kí tự hoa (ASCII cách nhau 32 đơn vị)
        }
    }
    cout << str;
    return 0;
}