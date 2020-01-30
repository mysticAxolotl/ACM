#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tests, fir, sec;
    cin >> tests;
    string out = "";
    for( int i = 0; i < tests; ++i )
    {
        cin >> fir >> sec;

        if( __gcd( fir, sec ) == 1 || fir == 1 || sec == 1 )
            out += "Finite\n";
        else
            out += "Infinite\n";
    }
    cout << out;
    return 0;
}