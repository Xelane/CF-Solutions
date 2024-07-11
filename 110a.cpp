#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long tot = 0;
    string s = to_string(n);
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '4' || s[i] == '7')
        {
            tot++;
        }
    }
    if(tot == 4 || tot == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}