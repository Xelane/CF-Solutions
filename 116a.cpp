#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    int min = 0;
    int curr = 0;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        curr -= a;
        curr += b;
    }
    return 0;
}