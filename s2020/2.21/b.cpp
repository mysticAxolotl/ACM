// B. Longest Palindrome
// https://codeforces.com/contest/1304/problem/B
// ACCEPTED

#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    short num, len;
    cin >> num >> len;

    map<string, int> words;
    string bigP = "";
    while( num-- )
    {
        string hold, hold2;
        cin >> hold;
        hold2 = hold;
        reverse( hold2.begin(), hold2.end() );
        if( hold == hold2 )
        {
            if( hold.length() > bigP.length() )
                bigP = hold;
        }
        else
        {
            ++words[ hold ];
            ++words[ hold2 ];
        }
    }

    string pal = "";
    for( auto i = words.begin(); i != words.end(); ++i )
    {
        if( i->second == 2 )
        {
            pal += i->first;
            string hold = i->first;
            reverse( hold.begin(), hold.end() );
            words.erase( hold );
        }
    }
    
    cout << pal.length() * 2 + bigP.length() << '\n'
         << pal << bigP;
    reverse( pal.begin(), pal.end() );
    cout << pal << '\n';

    return 0;
}