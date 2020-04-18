// B. Construct the String
// https://codeforces.com/contest/1335/problem/B
// ACCEPTED

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string l = "abcdefghijklmnopqrstuvwxyz", out;
    int t, len, sub, dist;
    cin >> t;
    while( t-- )
    {
        out = l;   
        cin >> len >> sub >> dist;
        out = out.substr( 0, dist );
        while( out.size() < len )
            out += out;
        cout << out.substr( 0, len ) << '\n';
    }
    return 0;
}