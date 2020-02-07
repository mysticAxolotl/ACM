// D. Two Strings
// https://codeforces.com/contest/224/problem/D

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    if( t.length() > s.length() )
    {
        cout << "NO\n";
        return 0;
    }
    else if( t.length() == s.length() )
    {
        if( t == s )
            cout << "YES\n";
        else
            cout << "NO\n";
        return 0;
    }
    
    {
    set<char> ss, ts;
    for( auto i = s.begin(); i != s.end(); ++i )
        ss.insert( *i );
    for( auto i = t.begin(); i != t.end(); ++i )
        ts.insert( *i );
    if( ss != ts )
    {
        cout << "NO\n";
        return 0;
    }
    if( ss.size() == 1 )
    {
        cout << "YES\n";
        return 0;
    }
    }

    if( *s.begin() != *t.begin() || *( s.end() - 1 ) != *( t.end() - 1 ) )
    {
        cout << "NO\n";
        return 0;
    }
    
    for( auto i = s.begin(), j = t.begin(); i != s.end(); j = t.begin() )
    {
       for(auto h = i; j != t.end() && h != s.end(); )
        {
            if( *h == *j )  
            {
                for( ++h; *h == *j; ++h);
                ++j;
                if
                i = h;
            }
            else if( j != t.end() && h != s.begin() - 1 && *( h - 1 ) == *j )
                ++j;
            else
                ++h;
        }
        if( i == s.end() && j != t.end() )
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}