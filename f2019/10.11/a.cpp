// A. CME
// https://codeforces.com/contest/1241/problem/A
// ACCEPTED

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    string out;
    cin >> num;

    for( int i = 0, buy = 0, match; i < num; ++i, buy = 0 )
    {
        cin >> match;
        for(; match < 4; ++match, ++buy);
        if( match % 2 )
            out += to_string( ++buy );
        else
            out += to_string( buy );
        out += '\n';
    }
    cout << out;
    return 0;
}