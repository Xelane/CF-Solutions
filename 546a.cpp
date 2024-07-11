#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int borrow, total;
    total = 0;
    for(int i=0;i<w;i++)
    {
        total += ((i+1)*k);
    }
    borrow = total - n;
    if(borrow<0)
    {
        borrow = 0;
    }
    cout << borrow;
    return 0;
}