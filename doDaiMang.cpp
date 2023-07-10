#include <bits/stdc++.h>
using namespace std;
int main()
{
    string aa, bb;
    getline(cin, aa);
    getline(cin, bb);
    int doDai;
    if (aa.length() > bb.length())
    {
        for (int i = 0; i < aa.length(); i++)
        {
            doDai = aa.length() - bb.length();
        }
        cout << doDai+1;
    }
    if (aa.length() < bb.length())
    {
        for (int i = 0; i < bb.length(); i++)
        {
            doDai = bb.length() - aa.length();
        }
        cout << doDai-1;
    }
    return 0;
}
