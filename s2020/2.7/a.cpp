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
        auto i = num.begin();
        for(; !(( *i - '0' ) % 2 ) && i != num.end(); ++i );
        if( i == num.end() )
        {
            cout << "-1\n";
            continue;
        }
        auto j = i + 1;
        for(; !(( *j - '0' ) % 2 )  && j != num.end(); ++j );
        if( j == num.end() )
        {
            cout << "-1\n";
            continue;
        }
        cout << *i << *j << '\n';
    }
    return 0;
}