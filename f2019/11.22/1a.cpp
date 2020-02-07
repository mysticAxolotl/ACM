#include <iostream>
#include <cmath>
#include <string>
using namespace::std;

int main()
{
    int test;
    string out = "";
    cin >> test;
    for( int i = 0; i < test; ++i )
    {
        long cur, des;
        cin >> cur >> des;
        long diff = abs( des - cur );
        int num = 0;
        num += diff / 5;
        diff = diff % 5;
        num += diff / 2;
        diff = diff % 2;
        num += diff;
        out += to_string( num ) + '\n';
    }
    cout << out;
    return 0;
}