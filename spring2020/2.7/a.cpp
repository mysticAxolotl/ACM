// A. Even But Not Even
// https://codeforces.com/contest/1291/problem/A
// ACCEPTED

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    short tests, length;
    string num;
    cin >> tests;
    for(; tests; --tests )
    {
        cin >> length >> num;
        if( length == 1 )
        {
            cout << "-1\n";
            continue;
        }
 
        short odds = 0;
        auto j = num.begin(), k = num.begin();
        for( auto i = num.begin(); i != num.end(); ++i )
        {
            if( ( *i - '0' ) % 2 )
            {
                k = j;
                j = i;
                ++odds;
            }
        }

        if( odds < 2 )
        {
            cout << "-1\n";
            continue;
        }

        auto i = num.begin();
        for(; *i == '0' && i != num.end(); ++i );
        if( i == num.end() )
            cout << ( odds % 2 ? num.substr( 0, k - num.begin() + 1 ) : 
                                 num.substr( 0, j - num.begin() + 1 ) ) << '\n';
        else
            cout << ( odds % 2 ? num.substr( i - num.begin(), k - i + 1 ) : 
                                 num.substr( i - num.begin(), j - i + 1 ) ) << '\n';
    }
    return 0;
}