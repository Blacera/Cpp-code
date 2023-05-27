#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
    long long int i;
    string word;
    getline (cin, word);
    for (i = 0; i < word.length();i++) {
        word[i] =toupper(word[i]);
    }
        cout << word << endl;
        return 0;
}
